(window.webpackJsonp=window.webpackJsonp||[]).push([[31],{121:function(e,r,t){"use strict";var n=t(0),o=t(19);r.a=function(){const e=Object(n.useContext)(o.a);if(null===e)throw new Error("Docusaurus context not provided");return e}},122:function(e,r,t){"use strict";t.d(r,"a",(function(){return f})),t.d(r,"b",(function(){return b}));var n=t(0),o=t.n(n);function a(e,r,t){return r in e?Object.defineProperty(e,r,{value:t,enumerable:!0,configurable:!0,writable:!0}):e[r]=t,e}function i(e,r){var t=Object.keys(e);if(Object.getOwnPropertySymbols){var n=Object.getOwnPropertySymbols(e);r&&(n=n.filter((function(r){return Object.getOwnPropertyDescriptor(e,r).enumerable}))),t.push.apply(t,n)}return t}function c(e){for(var r=1;r<arguments.length;r++){var t=null!=arguments[r]?arguments[r]:{};r%2?i(Object(t),!0).forEach((function(r){a(e,r,t[r])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(t)):i(Object(t)).forEach((function(r){Object.defineProperty(e,r,Object.getOwnPropertyDescriptor(t,r))}))}return e}function u(e,r){if(null==e)return{};var t,n,o=function(e,r){if(null==e)return{};var t,n,o={},a=Object.keys(e);for(n=0;n<a.length;n++)t=a[n],r.indexOf(t)>=0||(o[t]=e[t]);return o}(e,r);if(Object.getOwnPropertySymbols){var a=Object.getOwnPropertySymbols(e);for(n=0;n<a.length;n++)t=a[n],r.indexOf(t)>=0||Object.prototype.propertyIsEnumerable.call(e,t)&&(o[t]=e[t])}return o}var s=o.a.createContext({}),l=function(e){var r=o.a.useContext(s),t=r;return e&&(t="function"==typeof e?e(r):c(c({},r),e)),t},f=function(e){var r=l(e.components);return o.a.createElement(s.Provider,{value:r},e.children)},p={inlineCode:"code",wrapper:function(e){var r=e.children;return o.a.createElement(o.a.Fragment,{},r)}},d=o.a.forwardRef((function(e,r){var t=e.components,n=e.mdxType,a=e.originalType,i=e.parentName,s=u(e,["components","mdxType","originalType","parentName"]),f=l(t),d=n,b=f["".concat(i,".").concat(d)]||f[d]||p[d]||a;return t?o.a.createElement(b,c(c({ref:r},s),{},{components:t})):o.a.createElement(b,c({ref:r},s))}));function b(e,r){var t=arguments,n=r&&r.mdxType;if("string"==typeof e||n){var a=t.length,i=new Array(a);i[0]=d;var c={};for(var u in r)hasOwnProperty.call(r,u)&&(c[u]=r[u]);c.originalType=e,c.mdxType="string"==typeof e?e:n,i[1]=c;for(var s=2;s<a;s++)i[s]=t[s];return o.a.createElement.apply(null,i)}return o.a.createElement.apply(null,t)}d.displayName="MDXCreateElement"},123:function(e,r,t){"use strict";t.d(r,"b",(function(){return a})),t.d(r,"a",(function(){return i}));var n=t(121),o=t(124);function a(){const{siteConfig:{baseUrl:e="/",url:r}={}}=Object(n.a)();return{withBaseUrl:(t,n)=>function(e,r,t,{forcePrependBaseUrl:n=!1,absolute:a=!1}={}){if(!t)return t;if(t.startsWith("#"))return t;if(Object(o.b)(t))return t;if(n)return r+t;const i=!t.startsWith(r)?r+t.replace(/^\//,""):t;return a?e+i:i}(r,e,t,n)}}function i(e,r={}){const{withBaseUrl:t}=a();return t(e,r)}},124:function(e,r,t){"use strict";function n(e){return!0===/^(\w*:|\/\/)/.test(e)}function o(e){return void 0!==e&&!n(e)}t.d(r,"b",(function(){return n})),t.d(r,"a",(function(){return o}))},90:function(e,r,t){"use strict";t.r(r),t.d(r,"frontMatter",(function(){return c})),t.d(r,"metadata",(function(){return u})),t.d(r,"rightToc",(function(){return s})),t.d(r,"default",(function(){return f}));var n=t(2),o=t(6),a=(t(0),t(122)),i=t(123),c={id:"graphViewer",title:"Visualizador de Gr\xe1ficos",sidebar_label:"Visualizador de Gr\xe1ficos"},u={unversionedId:"graphViewer",id:"graphViewer",isDocsHomePage:!1,title:"Visualizador de Gr\xe1ficos",source:"@site/docs\\graphViewer.md",permalink:"/PSP/docs/graphViewer",editUrl:"https://github.com/Thales1330/PSP/tree/master/docusaurus/docs/graphViewer.md",sidebar_label:"Visualizador de Gr\xe1ficos",sidebar:"docs",previous:{title:"Relat\xf3rios Tabulares",permalink:"/PSP/docs/tabularReport"},next:{title:"Mapa de Tens\xe3o",permalink:"/PSP/docs/heatmap"}},s=[],l={rightToc:s};function f(e){var r=e.components,t=Object(o.a)(e,["components"]);return Object(a.b)("wrapper",Object(n.a)({},l,t,{components:r,mdxType:"MDXLayout"}),Object(a.b)("link",{rel:"stylesheet",href:Object(i.a)("katex/katex.min.css")}))}f.isMDXComponent=!0}}]);