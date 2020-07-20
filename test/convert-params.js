function getQueryString(params) {
  const esc = encodeURIComponent;
  return Object.keys(params)
    .filter((k) => params[k] || params[k] === 0)
    .map((k) => `${esc(k)}=${esc(params[k])}`)
    .join('&');
}
