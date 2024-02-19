<%*
tp.file.rename(tp.date.now("X") + "-" + tp.file.title);

const head = `---
id: ${tp.file.title}
aliases:
- ${tp.file.title}
tags:
---
`;

const file_t = tp.file.find_tfile(tp.file.title);
await app.vault.modify(file_t, head + tp.file.content);
-%>