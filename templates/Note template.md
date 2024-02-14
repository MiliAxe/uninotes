---
creation date: <% tp.file.creation_date() %>
modification date: <% tp.file.last_modified_date("dddd Do MMMM YYYY HH:mm:ss") %>
---
<% tp.file.title %>
`<% await tp.file.rename(tp.date.now("X") + "-" + tp.file.title)%>