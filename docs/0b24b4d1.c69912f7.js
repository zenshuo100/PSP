(window.webpackJsonp=window.webpackJsonp||[]).push([[6],{121:function(e,o,a){"use strict";var t=a(0),r=a(19);o.a=function(){const e=Object(t.useContext)(r.a);if(null===e)throw new Error("Docusaurus context not provided");return e}},122:function(e,o,a){"use strict";a.d(o,"a",(function(){return l})),a.d(o,"b",(function(){return u}));var t=a(0),r=a.n(t);function n(e,o,a){return o in e?Object.defineProperty(e,o,{value:a,enumerable:!0,configurable:!0,writable:!0}):e[o]=a,e}function s(e,o){var a=Object.keys(e);if(Object.getOwnPropertySymbols){var t=Object.getOwnPropertySymbols(e);o&&(t=t.filter((function(o){return Object.getOwnPropertyDescriptor(e,o).enumerable}))),a.push.apply(a,t)}return a}function c(e){for(var o=1;o<arguments.length;o++){var a=null!=arguments[o]?arguments[o]:{};o%2?s(Object(a),!0).forEach((function(o){n(e,o,a[o])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(a)):s(Object(a)).forEach((function(o){Object.defineProperty(e,o,Object.getOwnPropertyDescriptor(a,o))}))}return e}function i(e,o){if(null==e)return{};var a,t,r=function(e,o){if(null==e)return{};var a,t,r={},n=Object.keys(e);for(t=0;t<n.length;t++)a=n[t],o.indexOf(a)>=0||(r[a]=e[a]);return r}(e,o);if(Object.getOwnPropertySymbols){var n=Object.getOwnPropertySymbols(e);for(t=0;t<n.length;t++)a=n[t],o.indexOf(a)>=0||Object.prototype.propertyIsEnumerable.call(e,a)&&(r[a]=e[a])}return r}var d=r.a.createContext({}),b=function(e){var o=r.a.useContext(d),a=o;return e&&(a="function"==typeof e?e(o):c(c({},o),e)),a},l=function(e){var o=b(e.components);return r.a.createElement(d.Provider,{value:o},e.children)},m={inlineCode:"code",wrapper:function(e){var o=e.children;return r.a.createElement(r.a.Fragment,{},o)}},p=r.a.forwardRef((function(e,o){var a=e.components,t=e.mdxType,n=e.originalType,s=e.parentName,d=i(e,["components","mdxType","originalType","parentName"]),l=b(a),p=t,u=l["".concat(s,".").concat(p)]||l[p]||m[p]||n;return a?r.a.createElement(u,c(c({ref:o},d),{},{components:a})):r.a.createElement(u,c({ref:o},d))}));function u(e,o){var a=arguments,t=o&&o.mdxType;if("string"==typeof e||t){var n=a.length,s=new Array(n);s[0]=p;var c={};for(var i in o)hasOwnProperty.call(o,i)&&(c[i]=o[i]);c.originalType=e,c.mdxType="string"==typeof e?e:t,s[1]=c;for(var d=2;d<n;d++)s[d]=a[d];return r.a.createElement.apply(null,s)}return r.a.createElement.apply(null,a)}p.displayName="MDXCreateElement"},123:function(e,o,a){"use strict";a.d(o,"b",(function(){return n})),a.d(o,"a",(function(){return s}));var t=a(121),r=a(124);function n(){const{siteConfig:{baseUrl:e="/",url:o}={}}=Object(t.a)();return{withBaseUrl:(a,t)=>function(e,o,a,{forcePrependBaseUrl:t=!1,absolute:n=!1}={}){if(!a)return a;if(a.startsWith("#"))return a;if(Object(r.b)(a))return a;if(t)return o+a;const s=!a.startsWith(o)?o+a.replace(/^\//,""):a;return n?e+s:s}(o,e,a,t)}}function s(e,o={}){const{withBaseUrl:a}=n();return a(e,o)}},124:function(e,o,a){"use strict";function t(e){return!0===/^(\w*:|\/\/)/.test(e)}function r(e){return void 0!==e&&!t(e)}a.d(o,"b",(function(){return t})),a.d(o,"a",(function(){return r}))},60:function(e,o,a){"use strict";a.r(o),a.d(o,"frontMatter",(function(){return c})),a.d(o,"metadata",(function(){return i})),a.d(o,"Highlight",(function(){return d})),a.d(o,"rightToc",(function(){return b})),a.d(o,"default",(function(){return m}));var t=a(2),r=a(6),n=(a(0),a(122)),s=a(123),c={id:"cadTools",title:"Ferramentas CAD",sidebar_label:"Ferramentas CAD"},i={unversionedId:"cadTools",id:"cadTools",isDocsHomePage:!1,title:"Ferramentas CAD",description:"export const Highlight = ({children, color}) => ( <span style={{",source:"@site/docs\\cadTools.md",permalink:"/PSP/docs/cadTools",editUrl:"https://github.com/Thales1330/PSP/tree/master/docusaurus/docs/cadTools.md",sidebar_label:"Ferramentas CAD",sidebar:"docs",previous:{title:"Tela Principal",permalink:"/PSP/docs/mainScreen"},next:{title:"Editor de Pot\xeancia",permalink:"/PSP/docs/powerEditor"}},d=function(e){var o=e.children,a=e.color;return Object(n.b)("span",{style:{backgroundColor:a,borderRadius:"2px",color:"#000",padding:"0.2rem"}},o)},b=[{value:"Ferramentas do menu",id:"ferramentas-do-menu",children:[{value:"Selecionar",id:"selecionar",children:[]},{value:"Mover",id:"mover",children:[]},{value:"Girar",id:"girar",children:[]},{value:"Arrastar",id:"arrastar",children:[]},{value:"Zoom",id:"zoom",children:[]},{value:"Encaixar",id:"encaixar",children:[]},{value:"Copiar e Colar",id:"copiar-e-colar",children:[]},{value:"Excluir",id:"excluir",children:[]}]},{value:"Personaliza\xe7\xe3o gr\xe1fica os elementos",id:"personaliza\xe7\xe3o-gr\xe1fica-os-elementos",children:[{value:"Barra",id:"barra",children:[]},{value:"Linha",id:"linha",children:[]}]},{value:"Conex\xe3o e desconex\xe3o de elemetos na barra",id:"conex\xe3o-e-desconex\xe3o-de-elemetos-na-barra",children:[]}],l={Highlight:d,rightToc:b};function m(e){var o=e.components,a=Object(r.a)(e,["components"]);return Object(n.b)("wrapper",Object(t.a)({},l,a,{components:o,mdxType:"MDXLayout"}),Object(n.b)("blockquote",null,Object(n.b)("p",{parentName:"blockquote"},"Desenho assistido por computador (DAC; em ingl\xeas: ",Object(n.b)("em",{parentName:"p"},"computer aided design")," - CAD) \xe9 o nome gen\xe9rico de sistemas computacionais (",Object(n.b)("em",{parentName:"p"},"software"),") utilizados pela engenharia, geologia, geografia, arquitetura e design para facilitar o projeto e desenho t\xe9cnicos. No caso do ",Object(n.b)("em",{parentName:"p"},"design"),", este pode estar ligado especificamente a todas as suas vertentes (produtos como vestu\xe1rio, eletroeletr\xf4nicos, automobil\xedsticos, etc.), de modo que os jarg\xf5es de cada especialidade s\xe3o incorporados na interface de cada programa. ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"https://pt.wikipedia.org/wiki/Desenho_assistido_por_computador"}),"Wikipedia"))),Object(n.b)("h2",{id:"ferramentas-do-menu"},"Ferramentas do menu"),Object(n.b)("p",null,"Todos os objetos criados cont\xeam v\xe1rios atributos gr\xe1ficos, como: posi\xe7\xe3o, orienta\xe7\xe3o, cor, tamanho, etc. Para modific\xe1-los foram inseridas algumas ferramentas intuitivas e de f\xe1cil utiliza\xe7\xe3o, as quais s\xe3o: ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#selecionar"}),Object(n.b)("strong",{parentName:"a"},"selecionar")),", ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#mover"}),Object(n.b)("strong",{parentName:"a"},"mover")),", ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#girar"}),Object(n.b)("strong",{parentName:"a"},"girar")),", ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#arrastar"}),Object(n.b)("strong",{parentName:"a"},"arrastar")),", ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#zoom"}),Object(n.b)("strong",{parentName:"a"},"zoom")),", ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#encaixar"}),Object(n.b)("strong",{parentName:"a"},"encaixar")),", ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#copiar-e-colar"}),Object(n.b)("strong",{parentName:"a"},"copiar, colar"))," e ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"cadTools#excluir"}),Object(n.b)("strong",{parentName:"a"},"excluir")),"."),Object(n.b)("p",null,"Essas ferramentas podem ser acessadas por suas teclas de atalho assim como pelo ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"mainScreen#menu-ribbon"}),"submenu Ferramentas"),"."),Object(n.b)("p",null,"Tais ferramentas permitem a ",Object(n.b)("strong",{parentName:"p"},"personaliza\xe7\xe3o"),", ",Object(n.b)("strong",{parentName:"p"},"navega\xe7\xe3o")," e auxiliam a ",Object(n.b)("strong",{parentName:"p"},"cria\xe7\xe3o")," de redes el\xe9tricas de pot\xeancia, assim como diagramas de controle na plataforma."),Object(n.b)("h3",{id:"selecionar"},"Selecionar"),Object(n.b)("p",null,"A sele\xe7\xe3o de um \xfanico objeto \xe9 realizada clicando com o bot\xe3o esquerdo do mouse sobre o elemento, que ser\xe1 identificado pelo contorno em ",Object(n.b)(d,{color:"#80bfff",mdxType:"Highlight"},"azul")," do objeto."),Object(n.b)("p",null,"Para a sele\xe7\xe3o de v\xe1rios objetos simultaneamente \xe9 necess\xe1rio clicar com o bot\xe3o esquerdo do mouse em um local vazio da tela e arrast\xe1-lo, criando assim um ",Object(n.b)("strong",{parentName:"p"},"ret\xe2ngulo de sele\xe7\xe3o")," que ir\xe1 acompanhar o ponteiro do mouse enquanto o bot\xe3o esquerdo estiver pressionado. Ao solt\xe1-lo todos os objetos que intercederem o ret\xe2ngulo ser\xe3o selecionados."),Object(n.b)("p",null,"Mantendo pressionado a tecla Control (Ctrl) do teclado pode-se manter sele\xe7\xf5es anteriores enquanto novos elementos s\xe3o selecionados."),Object(n.b)("p",null,"Para desmarcar todos os objetos basta clicar em uma \xe1rea sem objetos."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/select.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/select.webm"),type:"video/webm"})),Object(n.b)("h3",{id:"mover"},"Mover"),Object(n.b)("p",null,"Um elemento poder\xe1 ser movido para qualquer local por meio da a\xe7\xe3o ",Object(n.b)("em",{parentName:"p"},"drag-and-drop")," (clicando e arrastando) ou pela ferramenta mover."),Object(n.b)("p",null,"Ao habilitar o \u201cmodo mover\u201d, movendo todos os componentes selecionados \xe0 medida que a posi\xe7\xe3o do mouse \xe9 alterada. Para desabilitar esse modo basta pressionar a tecla Escape do teclado."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/move.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/move.webm"),type:"video/webm"})),Object(n.b)("h3",{id:"girar"},"Girar"),Object(n.b)("p",null,"Alguns objetos poder\xe3o ser rotacionados atrav\xe9s da ferramenta girar, acessado pela tecla de atalho \u201cR\u201d, girando o objeto no sentido hor\xe1rio, ou \u201cShift + R\u201d, para o sentido anti-hor\xe1rio (essa op\xe7\xe3o ir\xe1 afetar todos os objetos selecionados). O elemento tamb\xe9m pode ser rotacionado pelo ",Object(n.b)("a",Object(t.a)({parentName:"p"},{href:"mainScreen#menu-ribbon"}),"submenu Ferramentas")," ou ao acessar o menu de contexto clicando com o bot\xe3o direito sobre o elemento."),Object(n.b)("div",{className:"admonition admonition-caution alert alert--warning"},Object(n.b)("div",Object(t.a)({parentName:"div"},{className:"admonition-heading"}),Object(n.b)("h5",{parentName:"div"},Object(n.b)("span",Object(t.a)({parentName:"h5"},{className:"admonition-icon"}),Object(n.b)("svg",Object(t.a)({parentName:"span"},{xmlns:"http://www.w3.org/2000/svg",width:"16",height:"16",viewBox:"0 0 16 16"}),Object(n.b)("path",Object(t.a)({parentName:"svg"},{fillRule:"evenodd",d:"M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 0 0 0 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 0 0 .01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"})))),"Aten\xe7\xe3o!")),Object(n.b)("div",Object(t.a)({parentName:"div"},{className:"admonition-content"}),Object(n.b)("p",{parentName:"div"},"O menu de contexto somente ser\xe1 exibido se o elemento estiver selecionado."))),Object(n.b)("p",null,"Ao utilizar essa ferramenta os objetos ir\xe3o girar 45\xba a partir do seu ponto de origem. Para atingir a angula\xe7\xe3o pretendida basta repetir o processo de rota\xe7\xe3o."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/rotate.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/rotate.webm"),type:"video/webm"})),Object(n.b)("h3",{id:"arrastar"},"Arrastar"),Object(n.b)("p",null,"Tr\xeas ferramentas muito \xfateis na navega\xe7\xe3o do circuito, principalmente em grandes redes, s\xe3o: arrastar, zoom e encaixar."),Object(n.b)("p",null,"A ferramenta arrastar possibilita mover todo o circuito ",Object(n.b)("strong",{parentName:"p"},"preservando as posi\xe7\xf5es relativas entre os elementos"),". Esta ferramenta pode ser acessada pelo submenu \u201cFerramentas\u201d ou ",Object(n.b)("strong",{parentName:"p"},"mantendo pressionada o ",Object(n.b)("em",{parentName:"strong"},"scroll")," do mouse"),", ativando assim o \u201cmodo arrastar\u201d. Ao ativ\xe1-lo todo o circuito ser\xe1 movido clicando e arrastando na dire\xe7\xe3o desejada."),Object(n.b)("p",null,"Para sair do \u201cmodo arrastar\u201d basta pressionar a tecla Escape do teclado."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/drag.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/drag.webm"),type:"video/webm"})),Object(n.b)("h3",{id:"zoom"},"Zoom"),Object(n.b)("p",null,"O zoom ser\xe1 aplicado ao utilizar o ",Object(n.b)("strong",{parentName:"p"},"scroll do mouse")," para mais ou menos zoom. A ferramenta zoom ir\xe1 aproximar ou distanciar o circuito a partir da posi\xe7\xe3o do ponteiro do mouse na tela para encontrar objetos ou destaca-los."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/zoom.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/zoom.webm"),type:"video/webm"})),Object(n.b)("h3",{id:"encaixar"},"Encaixar"),Object(n.b)("p",null,"A ferramenta encaixar ir\xe1 mover o circuito e aplicar o zoom necess\xe1rio para que todos os componentes da rede sejam exibidos na tela. Esta ferramenta pode ser acessada atrav\xe9s do submenu \u201cFerramentas\u201d ou pela combina\xe7\xe3o de teclas \u201cShift + F\u201d."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/fit.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/fit.webm"),type:"video/webm"})),Object(n.b)("h3",{id:"copiar-e-colar"},"Copiar e Colar"),Object(n.b)("p",null,"Duas ferramentas importantes durante o processo de cria\xe7\xe3o da rede el\xe9trica de pot\xeancia no ",Object(n.b)("em",{parentName:"p"},"software")," s\xe3o copiar e colar. Qualquer circuito criado no PSP-UFU poder\xe1 ser duplicado completamente ou parcialmente no mesmo projeto ou em m\xfaltiplos atrav\xe9s dessas ferramentas."),Object(n.b)("p",null,"Para copiar basta selecionar os elementos que se deseja duplicar e acessar a ferramenta no submenu \u201cFerramentas\u201d ou pressionando a combina\xe7\xe3o das teclas \u201cCtrl + C\u201d, ent\xe3o os dados do circuito ser\xe3o copiados para a \xe1rea de transfer\xeancia. Ao copiar um circuito ele poder\xe1 ser colado no mesmo projeto ou em um projeto distinto, utilizando o mesmo submenu ou pressionando a combina\xe7\xe3o das teclas \u201cCtrl + V\u201d."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/copyPaste.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/copyPaste.webm"),type:"video/webm"})),Object(n.b)("h3",{id:"excluir"},"Excluir"),Object(n.b)("p",null,"Qualquer objeto poder\xe1 ser exclu\xeddo do projeto por meio da ferramenta deletar, presente no menu Ribbon, pela tecla de atalho Delete ou pelo acesso ao menu de contexto clicando com o bot\xe3o direito sobre o elemento selecionado."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/delete.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/delete.webm"),type:"video/webm"})),Object(n.b)("h2",{id:"personaliza\xe7\xe3o-gr\xe1fica-os-elementos"},"Personaliza\xe7\xe3o gr\xe1fica os elementos"),Object(n.b)("p",null,"Alguns elementos permitem sua personaliza\xe7\xe3o gr\xe1fica, como as barras e linhas."),Object(n.b)("h3",{id:"barra"},"Barra"),Object(n.b)("p",null,"No caso dos barramentos, pode-se alterar o ",Object(n.b)("strong",{parentName:"p"},"comprimento da barra")," clicando e arrastando no ",Object(n.b)("em",{parentName:"p"},"pickbox")," exibido ao posicionar o ponteiro do mouse sobre esse elemento selecionado."),Object(n.b)("h3",{id:"linha"},"Linha"),Object(n.b)("p",null,"As linhas podem ser inseridas com ",Object(n.b)("strong",{parentName:"p"},'"n\xf3s" (pontos de ancoragem)'),", personalizando a disposi\xe7\xe3o das linhas no diagrama unifilar. Esses n\xf3s s\xe3o inseridos durante o processo de cria\xe7\xe3o do elemento, anteriormente \xe0 sele\xe7\xe3o da segunda barra."),Object(n.b)("p",null,"Ap\xf3s a sua inser\xe7\xe3o, novos n\xf3s podem ser anexados pelo menu de contexto acessado ao clicar com o bot\xe3o direito sobre a linha selecionada. Sua remo\xe7\xe3o tamb\xe9m \xe9 alcan\xe7ada por uma op\xe7\xe3o do menu de contexto."),Object(n.b)("p",null,"Assim como nos barramentos, a altera\xe7\xe3o da posi\xe7\xe3o dos n\xf3s \xe9 obtida clicando e arrastando o ",Object(n.b)("em",{parentName:"p"},"pickbox")," exibido ao posicionar o ponteiro do mouse sobre esse elemento selecionado."),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/graphicPropsChange.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/graphicPropsChange.webm"),type:"video/webm"})),Object(n.b)("h2",{id:"conex\xe3o-e-desconex\xe3o-de-elemetos-na-barra"},"Conex\xe3o e desconex\xe3o de elemetos na barra"),Object(n.b)("p",null,"Os elementos podem ser desconectados e reconectados \xe0s barras ap\xf3s sua inser\xe7\xe3o somente pela ferramenta ",Object(n.b)("em",{parentName:"p"},"drag-and-drop"),". Para isso, o elemento deve ser selecionado e o seu n\xf3 de conex\xe3o deve ser arrastado para o local requerido."),Object(n.b)("div",{className:"admonition admonition-warning alert alert--danger"},Object(n.b)("div",Object(t.a)({parentName:"div"},{className:"admonition-heading"}),Object(n.b)("h5",{parentName:"div"},Object(n.b)("span",Object(t.a)({parentName:"h5"},{className:"admonition-icon"}),Object(n.b)("svg",Object(t.a)({parentName:"span"},{xmlns:"http://www.w3.org/2000/svg",width:"12",height:"16",viewBox:"0 0 12 16"}),Object(n.b)("path",Object(t.a)({parentName:"svg"},{fillRule:"evenodd",d:"M5.05.31c.81 2.17.41 3.38-.52 4.31C3.55 5.67 1.98 6.45.9 7.98c-1.45 2.05-1.7 6.53 3.53 7.7-2.2-1.16-2.67-4.52-.3-6.61-.61 2.03.53 3.33 1.94 2.86 1.39-.47 2.3.53 2.27 1.67-.02.78-.31 1.44-1.13 1.81 3.42-.59 4.78-3.42 4.78-5.56 0-2.84-2.53-3.22-1.25-5.61-1.52.13-2.03 1.13-1.89 2.75.09 1.08-1.02 1.8-1.86 1.33-.67-.41-.66-1.19-.06-1.78C8.18 5.31 8.68 2.45 5.05.32L5.03.3l.02.01z"})))),"Cuidado!")),Object(n.b)("div",Object(t.a)({parentName:"div"},{className:"admonition-content"}),Object(n.b)("p",{parentName:"div"},"O elemento a ser desconectado/reconectado ",Object(n.b)("strong",{parentName:"p"},"deve ser previamente selecionado")," para efetuar a opera\xe7\xe3o. Caso contr\xe1rio a barra ser\xe1 movida ou nenhuma opera\xe7\xe3o ser\xe1 realizada."))),Object(n.b)("p",null,"No caso de desconex\xe3o, o elemento ser\xe1 automaticamente removido da simula\xe7\xe3o, sendo indicado pela sua cor (o elemento passa a ter cor ",Object(n.b)(d,{color:"#7f7f7f",mdxType:"Highlight"},"cinza"),")."),Object(n.b)("div",{className:"admonition admonition-caution alert alert--warning"},Object(n.b)("div",Object(t.a)({parentName:"div"},{className:"admonition-heading"}),Object(n.b)("h5",{parentName:"div"},Object(n.b)("span",Object(t.a)({parentName:"h5"},{className:"admonition-icon"}),Object(n.b)("svg",Object(t.a)({parentName:"span"},{xmlns:"http://www.w3.org/2000/svg",width:"16",height:"16",viewBox:"0 0 16 16"}),Object(n.b)("path",Object(t.a)({parentName:"svg"},{fillRule:"evenodd",d:"M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 0 0 0 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 0 0 .01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"})))),"Aten\xe7\xe3o!")),Object(n.b)("div",Object(t.a)({parentName:"div"},{className:"admonition-content"}),Object(n.b)("p",{parentName:"div"},"Ao reconectar o elemento ao circuito, deve-se ",Object(n.b)("strong",{parentName:"p"},'atentar para estado do seu "disjuntor"'),", indicado por um quadrado pr\xf3ximo ao seu n\xf3 de conex\xe3o. Um elemento reconectado volta ao circuito com seu disjuntor aberto (",Object(n.b)(d,{color:"#ff1919",mdxType:"Highlight"},"vermelho"),"), sendo necess\xe1rio clicar sobre o mesmo a fim de inserir o elemento no circuito."))),Object(n.b)("video",{autoPlay:!0,loop:!0,muted:!0,controls:!0},Object(n.b)("source",{src:Object(s.a)("videos/disconnect.mp4"),type:"video/mp4"}),Object(n.b)("source",{src:Object(s.a)("videos/disconnect.webm"),type:"video/webm"})))}m.isMDXComponent=!0}}]);