async function getApiData(search) {
  try {
    const response = await fetch(`https://api.github.com/users/${search}`); //
    const data = await response.json();
    return data;
  } catch (err) {
    return null;
  }

  //   console.log(obj);
}
document.getElementById("search").addEventListener("change", async (e) => {
  let search = String(e.target.value);
  let res = await getApiData(search);
  let {
    name,
    followers,
    following,
    location,
    avatar_url,
    bio,
    public_repos,
    twitter_username,
  } = res;
  console.log(res);
  console.log(name);
  let main = document.getElementById("main");
  main.innerHTML = `
  <div class="card border-0">
    <div class="row">
      <div class="col-12 col-sm-4  col-lg-3  text-center">
          <img src="${avatar_url}" alt="profile image" class=" img-fluid">
      </div>
      <div class="col-12 col-sm-8  col-lg-9 pt-3 px-5 overflow-hidden text-justify text-white">
          <h5>${name}</h5>
          <p>${bio}</p>
          <ul>
              <li>Followers : ${followers}</li>
              <li>Following : ${following}</li>
              <li>Repos : ${public_repos}</li>
          </ul>
          <ul>
              <li>Twitter : ${twitter_username}</li>
              <li>Location : ${location}</li>
          </ul>
      </div>
    </div>
   </div>
    `;
});
