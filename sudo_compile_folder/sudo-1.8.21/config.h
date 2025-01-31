/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef SUDO_CONFIG_H
#define SUDO_CONFIG_H

/* Define to 1 if you want the insults from the "classic" version sudo. */
/* #undef CLASSIC_INSULTS */

/* Define to 1 if you want insults culled from the twisted minds of CSOps. */
/* #undef CSOPS_INSULTS */

/* Define to 1 if you want sudo to display "command not allowed" instead of
   "command not found" when a command cannot be found. */
/* #undef DONT_LEAK_PATH_INFO */

/* A colon-separated list of pathnames to be used as the editor for visudo. */
#define EDITOR _PATH_VI

/* Define to 1 to enable sudo's plugin interface. */
#define ENABLE_SUDO_PLUGIN_API 1

/* Define to 1 to enable environment function debugging. */
/* #undef ENV_DEBUG */

/* Define to 1 if you want visudo to honor the EDITOR and VISUAL env
   variables. */
/* #undef ENV_EDITOR */

/* Define to 1 to enable environment resetting by default. */
#define ENV_RESET 1

/* If defined, users in this group need not enter a passwd (ie "sudo"). */
/* #undef EXEMPTGROUP */

/* Define to 1 if you want to require fully qualified hosts in sudoers. */
/* #undef FQDN */

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define to 1 if you want insults from the "Goon Show". */
/* #undef GOONS_INSULTS */

/* Define to 1 if you want 2001-like insults. */
/* #undef HAL_INSULTS */

/* Define to 1 if you use AFS. */
/* #undef HAVE_AFS */

/* Define to 1 if you use AIX general authentication. */
/* #undef HAVE_AIXAUTH */

/* Define to 1 if you have the `arc4random' function. */
/* #undef HAVE_ARC4RANDOM */

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if the system has the type `authdb_t'. */
/* #undef HAVE_AUTHDB_T */

/* Define to 1 if you have the `authenticate' function. */
/* #undef HAVE_AUTHENTICATE */

/* Define to 1 if you have the `auth_challenge' function. */
/* #undef HAVE_AUTH_CHALLENGE */

/* Define to 1 if you have the `bigcrypt' function. */
/* #undef HAVE_BIGCRYPT */

/* Define to 1 if you use BSD authentication. */
/* #undef HAVE_BSD_AUTH_H */

/* Define to 1 to enable BSM audit support. */
/* #undef HAVE_BSM_AUDIT */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `closefrom' function. */
/* #undef HAVE_CLOSEFROM */

/* Define to 1 if you use OSF DCE. */
/* #undef HAVE_DCE */

/* Define to 1 if your `DIR' contains dd_fd. */
/* #undef HAVE_DD_FD */

/* Define to 1 if you have the declaration of `errno', and to 0 if you don't.
   */
#define HAVE_DECL_ERRNO 1

/* Define to 1 if you have the declaration of `getdomainname', and to 0 if you
   don't. */
#define HAVE_DECL_GETDOMAINNAME 1

/* Define to 1 if you have the declaration of `getgrouplist_2', and to 0 if
   you don't. */
/* #undef HAVE_DECL_GETGROUPLIST_2 */

/* Define to 1 if you have the declaration of `getresuid', and to 0 if you
   don't. */
#define HAVE_DECL_GETRESUID 1

/* Define to 1 if you have the declaration of `h_errno', and to 0 if you
   don't. */
#define HAVE_DECL_H_ERRNO 1

/* Define to 1 if you have the declaration of `innetgr', and to 0 if you
   don't. */
#define HAVE_DECL_INNETGR 1

/* Define to 1 if you have the declaration of `LLONG_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_LLONG_MAX 1

/* Define to 1 if you have the declaration of `LLONG_MIN', and to 0 if you
   don't. */
#define HAVE_DECL_LLONG_MIN 1

/* Define to 1 if you have the declaration of `PATH_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_PATH_MAX 1

/* Define to 1 if you have the declaration of `QUAD_MAX', and to 0 if you
   don't. */
/* #undef HAVE_DECL_QUAD_MAX */

/* Define to 1 if you have the declaration of `QUAD_MIN', and to 0 if you
   don't. */
/* #undef HAVE_DECL_QUAD_MIN */

/* Define to 1 if you have the declaration of `SECCOMP_SET_MODE_FILTER', and
   to 0 if you don't. */
#define HAVE_DECL_SECCOMP_SET_MODE_FILTER 1

/* Define to 1 if you have the declaration of `setauthdb', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SETAUTHDB */

/* Define to 1 if you have the declaration of `setresuid', and to 0 if you
   don't. */
#define HAVE_DECL_SETRESUID 1

/* Define to 1 if you have the declaration of `SIG2STR_MAX', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SIG2STR_MAX */

/* Define to 1 if you have the declaration of `SIZE_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_SIZE_MAX 1

/* Define to 1 if you have the declaration of `SIZE_T_MAX', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SIZE_T_MAX */

/* Define to 1 if you have the declaration of `sys_sigabbrev', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SIGABBREV 0

/* Define to 1 if you have the declaration of `sys_siglist', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SYS_SIGLIST */

/* Define to 1 if you have the declaration of `sys_signame', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SIGNAME 0

/* Define to 1 if you have the declaration of `ULLONG_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_ULLONG_MAX 1

/* Define to 1 if you have the declaration of `UQUAD_MAX', and to 0 if you
   don't. */
/* #undef HAVE_DECL_UQUAD_MAX */

/* Define to 1 if you have the declaration of `usrinfo', and to 0 if you
   don't. */
/* #undef HAVE_DECL_USRINFO */

/* Define to 1 if you have the declaration of `_innetgr', and to 0 if you
   don't. */
/* #undef HAVE_DECL__INNETGR */

/* Define to 1 if you have the declaration of `_POSIX_PATH_MAX', and to 0 if
   you don't. */
/* #undef HAVE_DECL__POSIX_PATH_MAX */

/* Define to 1 if you have the declaration of `_sys_siglist', and to 0 if you
   don't. */
/* #undef HAVE_DECL__SYS_SIGLIST */

/* Define to 1 if you have the declaration of `_sys_signame', and to 0 if you
   don't. */
#define HAVE_DECL__SYS_SIGNAME 0

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function or macro. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the `dispcrypt' function. */
/* #undef HAVE_DISPCRYPT */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if the compiler supports the __visibility__ attribute. */
#define HAVE_DSO_VISIBILITY 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the `exect' function. */
/* #undef HAVE_EXECT */

/* Define to 1 if you have the `execvP' function. */
/* #undef HAVE_EXECVP */

/* Define to 1 if you have the `execvpe' function. */
#define HAVE_EXECVPE 1

/* Define to 1 if you have the `faccessat' function. */
#define HAVE_FACCESSAT 1

/* Define to 1 if your system has the F_CLOSEM fcntl. */
/* #undef HAVE_FCNTL_CLOSEM */

/* Define to 1 if you have the `fexecve' function. */
#define HAVE_FEXECVE 1

/* Define to 1 if you have the `fgetln' function. */
/* #undef HAVE_FGETLN */

/* Define to 1 if you have the `fnmatch' function. */
#define HAVE_FNMATCH 1

/* Define to 1 if you have the `freeifaddrs' function. */
#define HAVE_FREEIFADDRS 1

/* Define to 1 if you have the `fseeko' function. */
/* #undef HAVE_FSEEKO */

/* Define to 1 if you have the `futime' function. */
/* #undef HAVE_FUTIME */

/* Define to 1 if you have the `futimens' function. */
#define HAVE_FUTIMENS 1

/* Define to 1 if you have the `futimes' function. */
/* #undef HAVE_FUTIMES */

/* Define to 1 if you have the `futimesat' function. */
/* #undef HAVE_FUTIMESAT */

/* Define to 1 if you use the FWTK authsrv daemon. */
/* #undef HAVE_FWTK */

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getdomainname' function. */
#define HAVE_GETDOMAINNAME 1

/* Define to 1 if you have the `getentropy' function. */
/* #undef HAVE_GETENTROPY */

/* Define to 1 if you have the `getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Define to 1 if you have the `getgrouplist_2' function. */
/* #undef HAVE_GETGROUPLIST_2 */

/* Define to 1 if your system has a working `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `getgrset' function. */
/* #undef HAVE_GETGRSET */

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the `getline' function. */
#define HAVE_GETLINE 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getprogname' function. */
/* #undef HAVE_GETPROGNAME */

/* Define to 1 if you have the `getprpwnam' function. (SecureWare-style shadow
   passwords). */
/* #undef HAVE_GETPRPWNAM */

/* Define to 1 if you have the `getpwnam_shadow' function. */
/* #undef HAVE_GETPWNAM_SHADOW */

/* Define to 1 if you have the `getresuid' function. */
#define HAVE_GETRESUID 1

/* Define to 1 if you have the `getspnam' function (SVR4-style shadow
   passwords). */
#define HAVE_GETSPNAM 1

/* Define to 1 if you have the `getttyent' function. */
/* #undef HAVE_GETTTYENT */

/* Define to 1 if you have the `getuserattr' function. */
/* #undef HAVE_GETUSERATTR */

/* Define to 1 if you have the `getutid' function. */
/* #undef HAVE_GETUTID */

/* Define to 1 if you have the `getutxid' function. */
#define HAVE_GETUTXID 1

/* Define to 1 if you have the `glob' function. */
#define HAVE_GLOB 1

/* Define to 1 if you have the `grantpt' function. */
/* #undef HAVE_GRANTPT */

/* Define to 1 if you have the <gssapi/gssapi_krb5.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_KRB5_H */

/* Define to 1 if you have the `gss_krb5_ccache_name' function. */
/* #undef HAVE_GSS_KRB5_CCACHE_NAME */

/* Define to 1 if your Kerberos is Heimdal. */
/* #undef HAVE_HEIMDAL */

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the `initprivs' function. */
/* #undef HAVE_INITPRIVS */

/* Define to 1 if you have the `innetgr' function. */
#define HAVE_INNETGR 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have isblank(3). */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `iscomsec' function. (HP-UX >= 10.x check for
   shadow enabled). */
/* #undef HAVE_ISCOMSEC */

/* Define to 1 if you use Kerberos V. */
/* #undef HAVE_KERB5 */

/* Define to 1 if you have the `killpg' function. */
#define HAVE_KILLPG 1

/* Define to 1 if you have the `krb5_get_init_creds_opt_alloc' function. */
/* #undef HAVE_KRB5_GET_INIT_CREDS_OPT_ALLOC */

/* Define to 1 if your `krb5_get_init_creds_opt_free' function takes two
   arguments. */
/* #undef HAVE_KRB5_GET_INIT_CREDS_OPT_FREE_TWO_ARGS */

/* Define to 1 if you have the `krb5_init_secure_context' function. */
/* #undef HAVE_KRB5_INIT_SECURE_CONTEXT */

/* Define to 1 if you have the `krb5_verify_user' function. */
/* #undef HAVE_KRB5_VERIFY_USER */

/* Define to 1 if your LDAP needs <lber.h>. (OpenLDAP does not). */
/* #undef HAVE_LBER_H */

/* Define to 1 if you use LDAP for sudoers. */
/* #undef HAVE_LDAP */

/* Define to 1 if you have the `ldapssl_init' function. */
/* #undef HAVE_LDAPSSL_INIT */

/* Define to 1 if you have the `ldapssl_set_strength' function. */
/* #undef HAVE_LDAPSSL_SET_STRENGTH */

/* Define to 1 if you have the `ldap_create' function. */
/* #undef HAVE_LDAP_CREATE */

/* Define to 1 if you have the `ldap_initialize' function. */
/* #undef HAVE_LDAP_INITIALIZE */

/* Define to 1 if you have the `ldap_sasl_bind_s' function. */
/* #undef HAVE_LDAP_SASL_BIND_S */

/* Define to 1 if you have the `ldap_sasl_interactive_bind_s' function. */
/* #undef HAVE_LDAP_SASL_INTERACTIVE_BIND_S */

/* Define to 1 if you have the `ldap_search_ext_s' function. */
/* #undef HAVE_LDAP_SEARCH_EXT_S */

/* Define to 1 if you have the `ldap_search_st' function. */
/* #undef HAVE_LDAP_SEARCH_ST */

/* Define to 1 if you have the `ldap_ssl_client_init' function. */
/* #undef HAVE_LDAP_SSL_CLIENT_INIT */

/* Define to 1 if you have the <ldap_ssl.h> header file. */
/* #undef HAVE_LDAP_SSL_H */

/* Define to 1 if you have the `ldap_ssl_init' function. */
/* #undef HAVE_LDAP_SSL_INIT */

/* Define to 1 if you have the `ldap_start_tls_s' function. */
/* #undef HAVE_LDAP_START_TLS_S */

/* Define to 1 if you have the `ldap_start_tls_s_np' function. */
/* #undef HAVE_LDAP_START_TLS_S_NP */

/* Define to 1 if you have the `ldap_str2dn' function. */
/* #undef HAVE_LDAP_STR2DN */

/* Define to 1 if you have the `ldap_unbind_ext_s' function. */
/* #undef HAVE_LDAP_UNBIND_EXT_S */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 to enable Linux audit support. */
/* #undef HAVE_LINUX_AUDIT */

/* Define to 1 if you have the `lockf' function. */
#define HAVE_LOCKF 1

/* Define to 1 if you have the <login_cap.h> header file. */
/* #undef HAVE_LOGIN_CAP_H */

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `lrand48' function. */
/* #undef HAVE_LRAND48 */

/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef HAVE_MACHINE_ENDIAN_H */

/* Define to 1 if you have the <maillock.h> header file. */
/* #undef HAVE_MAILLOCK_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memrchr' function. */
#define HAVE_MEMRCHR 1

/* Define to 1 if you have the `memset_s' function. */
/* #undef HAVE_MEMSET_S */

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the `mkstemps' function. */
#define HAVE_MKSTEMPS 1

/* Define to 1 if you have the <mps/ldap_ssl.h> header file. */
/* #undef HAVE_MPS_LDAP_SSL_H */

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netgroup.h> header file. */
/* #undef HAVE_NETGROUP_H */

/* Define to 1 if you have the `ngettext' function. */
#define HAVE_NGETTEXT 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if you have the <nss_dbdefs.h> header file. */
/* #undef HAVE_NSS_DBDEFS_H */

/* Define to 1 if you have the `nss_search' function. */
/* #undef HAVE_NSS_SEARCH */

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the `openpty' function. */
#define HAVE_OPENPTY 1

/* Define to 1 if you use NRL OPIE. */
/* #undef HAVE_OPIE */

/* Define to 1 if you have the `optreset' symbol. */
/* #undef HAVE_OPTRESET */

/* Define to 1 if you use PAM authentication. */
/* #undef HAVE_PAM */

/* Define to 1 if you have the `pam_getenvlist' function. */
/* #undef HAVE_PAM_GETENVLIST */

/* Define to 1 if you use a specific PAM session for sudo -i. */
/* #undef HAVE_PAM_LOGIN */

/* Define to 1 if you have the <pam/pam_appl.h> header file. */
/* #undef HAVE_PAM_PAM_APPL_H */

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the `posix_openpt' function. */
/* #undef HAVE_POSIX_OPENPT */

/* Define to 1 if you have the `posix_spawn' function. */
#define HAVE_POSIX_SPAWN 1

/* Define to 1 if you have the `posix_spawnp' function. */
#define HAVE_POSIX_SPAWNP 1

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define to 1 if you have the `pread64' function. */
/* #undef HAVE_PREAD64 */

/* Define to 1 if you have the `priv_set' function. */
/* #undef HAVE_PRIV_SET */

/* Define to 1 if you have the <procfs.h> header file. */
/* #undef HAVE_PROCFS_H */

/* Define to 1 if you have the <project.h> header file. */
/* #undef HAVE_PROJECT_H */

/* Define to 1 if you have the `pstat_getproc' function. */
/* #undef HAVE_PSTAT_GETPROC */

/* Define to 1 if you have the <pty.h> header file. */
#define HAVE_PTY_H 1

/* Define to 1 if you have the `pwrite' function. */
#define HAVE_PWRITE 1

/* Define to 1 if you have the `pwrite64' function. */
/* #undef HAVE_PWRITE64 */

/* Define to 1 if you have the `pw_dup' function. */
/* #undef HAVE_PW_DUP */

/* Define to 1 if you have the `random' function. */
/* #undef HAVE_RANDOM */

/* Define to 1 if you have the `reallocarray' function. */
#define HAVE_REALLOCARRAY 1

/* Define to 1 if you have the `revoke' function. */
/* #undef HAVE_REVOKE */

/* Define to 1 if the skeychallenge() function is RFC1938-compliant and takes
   4 arguments. */
/* #undef HAVE_RFC1938_SKEYCHALLENGE */

/* Define to 1 if you have the <sasl.h> header file. */
/* #undef HAVE_SASL_H */

/* Define to 1 if you have the <sasl/sasl.h> header file. */
/* #undef HAVE_SASL_SASL_H */

/* Define to 1 if you use SecurID for authentication. */
/* #undef HAVE_SECURID */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define to 1 to enable SELinux RBAC support. */
/* #undef HAVE_SELINUX */

/* Define to 1 if you have the `setauthdb' function. */
/* #undef HAVE_SETAUTHDB */

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setkeycreatecon' function. */
/* #undef HAVE_SETKEYCREATECON */

/* Define to 1 if you have the `setprogname' function. */
/* #undef HAVE_SETPROGNAME */

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setreuid' function. */
/* #undef HAVE_SETREUID */

/* Define to 1 if you have the `setrlimit64' function. */
/* #undef HAVE_SETRLIMIT64 */

/* Define to 1 if you have the `set_auth_parameters' function. */
/* #undef HAVE_SET_AUTH_PARAMETERS */

/* Define to 1 if you have the `SHA224Update' function. */
/* #undef HAVE_SHA224UPDATE */

/* Define to 1 if you have the `shl_load' function. */
/* #undef HAVE_SHL_LOAD */

/* Define to 1 if you have the `sia_ses_init' function. */
/* #undef HAVE_SIA_SES_INIT */

/* Define to 1 if you have the `sig2str' function. */
/* #undef HAVE_SIG2STR */

/* Define to 1 if you use S/Key. */
/* #undef HAVE_SKEY */

/* Define to 1 if your S/Key library has skeyaccess(). */
/* #undef HAVE_SKEYACCESS */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 to enable Solaris audit support. */
/* #undef HAVE_SOLARIS_AUDIT */

/* Define to 1 if you have the <spawn.h> header file. */
#define HAVE_SPAWN_H 1

/* Define to 1 to enable SSSD support. */
/* #undef HAVE_SSSD */

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtonum' function. */
/* #undef HAVE_STRTONUM */

/* Define to 1 if `d_namlen' is a member of `struct dirent'. */
/* #undef HAVE_STRUCT_DIRENT_D_NAMLEN */

/* Define to 1 if `d_type' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if the system has the type `struct in6_addr'. */
#define HAVE_STRUCT_IN6_ADDR 1

/* Define to 1 if `p_tdev' is a member of `struct kinfo_proc2'. */
/* #undef HAVE_STRUCT_KINFO_PROC2_P_TDEV */

/* Define to 1 if `ki_tdev' is a member of `struct kinfo_proc'. */
/* #undef HAVE_STRUCT_KINFO_PROC_KI_TDEV */

/* Define to 1 if `kp_eproc.e_tdev' is a member of `struct kinfo_proc'. */
/* #undef HAVE_STRUCT_KINFO_PROC_KP_EPROC_E_TDEV */

/* Define to 1 if `p_tdev' is a member of `struct kinfo_proc'. */
/* #undef HAVE_STRUCT_KINFO_PROC_P_TDEV */

/* Define to 1 if `pr_ttydev' is a member of `struct psinfo'. */
/* #undef HAVE_STRUCT_PSINFO_PR_TTYDEV */

/* Define if your struct sockaddr_in has a sin_len field. */
/* #undef HAVE_STRUCT_SOCKADDR_IN_SIN_LEN */

/* Define if your struct sockaddr has an sa_len field. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
/* #undef HAVE_STRUCT_TM_TM_GMTOFF */

/* Define to 1 if `ut_exit' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT 1

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT_E_TERMINATION 1

/* Define to 1 if `ut_exit.__e_termination' is a member of `struct utmpx'. */
/* #undef HAVE_STRUCT_UTMPX_UT_EXIT___E_TERMINATION */

/* Define to 1 if `ut_id' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_ID 1

/* Define to 1 if `ut_pid' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_PID 1

/* Define to 1 if `ut_tv' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_TV 1

/* Define to 1 if `ut_type' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_TYPE 1

/* Define to 1 if `ut_exit' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_EXIT */

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_EXIT_E_TERMINATION */

/* Define to 1 if `ut_exit.__e_termination' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_EXIT___E_TERMINATION */

/* Define to 1 if `ut_id' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_ID */

/* Define to 1 if `ut_pid' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_PID */

/* Define to 1 if `ut_tv' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_TV */

/* Define to 1 if `ut_type' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_TYPE */

/* Define to 1 if `ut_user' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_USER */

/* Define to 1 if your struct stat has an st_mtim member. */
#define HAVE_ST_MTIM 1

/* Define to 1 if your struct stat has an st_mtimespec member. */
/* #undef HAVE_ST_MTIMESPEC */

/* Define to 1 if your struct stat uses an st__tim union. */
/* #undef HAVE_ST__TIM */

/* Define to 1 if you have the `sysctl' function. */
#define HAVE_SYSCTL 1

/* Define to 1 if you have the `sysinfo' function. */
/* #undef HAVE_SYSINFO */

/* Define to 1 if you have the <sys/bsdtypes.h> header file. */
/* #undef HAVE_SYS_BSDTYPES_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/procfs.h> header file. */
#define HAVE_SYS_PROCFS_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if your libc has the `sys_sigabbrev' symbol. */
#define HAVE_SYS_SIGABBREV 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stropts.h> header file. */
#define HAVE_SYS_STROPTS_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
/* #undef HAVE_SYS_SYSTEMINFO_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `ttyslot' function. */
/* #undef HAVE_TTYSLOT */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* Define to 1 if you have the `utimes' function. */
/* #undef HAVE_UTIMES */

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `vsyslog' function. */
#define HAVE_VSYSLOG 1

/* Define to 1 if you have the `wordexp' function. */
#define HAVE_WORDEXP 1

/* Define to 1 if you have the <wordexp.h> header file. */
#define HAVE_WORDEXP_H 1

/* Define to 1 if you have the <zlib.h> header file. */
/* #undef HAVE_ZLIB_H */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define to 1 if you have the `_innetgr' function. */
/* #undef HAVE__INNETGR */

/* Define to 1 if you have the `_nss_initf_group' function. */
/* #undef HAVE__NSS_INITF_GROUP */

/* Define to 1 if you have the `_nss_XbyY_buf_alloc' function. */
/* #undef HAVE__NSS_XBYY_BUF_ALLOC */

/* Define to 1 if you have the `_ttyname_dev' function. */
/* #undef HAVE__TTYNAME_DEV */

/* Define to 1 if the compiler supports the C99 __func__ variable. */
#define HAVE___FUNC__ 1

/* Define to 1 if you have dyld with __interpose attribute support. */
/* #undef HAVE___INTERPOSE */

/* Define to 1 if you have the `__nss_initf_group' function. */
/* #undef HAVE___NSS_INITF_GROUP */

/* Define to 1 if you have the `__nss_XbyY_buf_alloc' function. */
/* #undef HAVE___NSS_XBYY_BUF_ALLOC */

/* Define to 1 if your crt0.o defines the __progname symbol for you. */
#define HAVE___PROGNAME 1

/* Define to 1 if you want the hostname to be entered into the log file. */
/* #undef HOST_IN_LOG */

/* Define to 1 if you want to ignore '.' and empty PATH elements. */
/* #undef IGNORE_DOT_PATH */

/* The message given when a bad password is entered. */
#define INCORRECT_PASSWORD "Sorry, try again."

/* The syslog facility sudo will use. */
#define LOGFAC "authpriv"

/* Define to SLOG_SYSLOG, SLOG_FILE, or SLOG_BOTH. */
#define LOGGING SLOG_SYSLOG

/* Define to 1 if you want a two line OTP (S/Key or OPIE) prompt. */
/* #undef LONG_OTP_PROMPT */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* The subject of the mail sent by sudo to the MAILTO user/address. */
#define MAILSUBJECT "*** SECURITY information for %h ***"

/* The user or email address that sudo mail is sent to. */
#define MAILTO "root"

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
/* #undef MAJOR_IN_SYSMACROS */

/* The max number of chars per log file line (for line wrapping). */
#define MAXLOGFILELEN 80

/* Define to the max length of a uid_t in string context (excluding the NUL).
   */
#define MAX_UID_T_LEN 10

/* Define to 1 if resolv.h must be included to get the `inet_ntop' or
   `inet_pton' function prototypes. */
/* #undef NEED_RESOLV_H */

/* Define to 1 if you don't want sudo to prompt for a password by default. */
/* #undef NO_AUTHENTICATION */

/* Define to 1 if you want sudo to free up memory before exiting. */
/* #undef NO_LEAKS */

/* Define to 1 if you don't want users to get the lecture the first they user
   sudo. */
/* #undef NO_LECTURE */

/* Define to 1 if you don't want to use sudo's PAM session support. */
/* #undef NO_PAM_SESSION */

/* Define to avoid runing the mailer as root. */
/* #undef NO_ROOT_MAILER */

/* Define to 1 if root should not be allowed to use sudo. */
/* #undef NO_ROOT_SUDO */

/* Define if your C preprocessor does not support variadic macros. */
/* #undef NO_VARIADIC_MACROS */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://bugzilla.sudo.ws/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "sudo"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "sudo 1.8.21"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "sudo"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.8.21"

/* Define to 1 if your system uses a Solaris-derived PAM and not Linux-PAM or
   OpenPAM. */
/* #undef PAM_SUN_CODEBASE */

/* The default password prompt. */
#define PASSPROMPT "Password: "

/* The passwd prompt timeout (in minutes). */
#define PASSWORD_TIMEOUT 5

/* Define to 1 to replace politically incorrect insults with less offensive
   ones. */
/* #undef PC_INSULTS */

/* Define to 1 to enable replacement getcwd if system getcwd is broken. */
/* #undef PREFER_PORTABLE_GETCWD */

/* Enable replacement (v)snprintf if system (v)snprintf is broken. */
/* #undef PREFER_PORTABLE_SNPRINTF */

/* The syslog priority sudo will use for unsuccessful attempts/errors. */
#define PRI_FAILURE "alert"

/* The syslog priority sudo will use for successful attempts. */
#define PRI_SUCCESS "notice"

/* Define to const if the `putenv' takes a const argument. */
#define PUTENV_CONST /**/

/* The default value of preloaded objects (if any). */
/* #undef RTLD_PRELOAD_DEFAULT */

/* The delimiter to use when defining multiple preloaded objects. */
#define RTLD_PRELOAD_DELIM ":"

/* An extra environment variable that is required to enable preloading (if
   any). */
/* #undef RTLD_PRELOAD_ENABLE_VAR */

/* The environment variable that controls preloading of dynamic objects. */
#define RTLD_PRELOAD_VAR "LD_PRELOAD"

/* The user sudo should run commands as by default. */
#define RUNAS_DEFAULT "root"

/* A colon-separated list of directories to override the user's PATH with. */
/* #undef SECURE_PATH */

/* Define to 1 to send mail when the user is not allowed to run a command. */
/* #undef SEND_MAIL_WHEN_NOT_OK */

/* Define to 1 to send mail when the user is not allowed to run sudo on this
   host. */
/* #undef SEND_MAIL_WHEN_NO_HOST */

/* Define to 1 to send mail when the user is not in the sudoers file. */
#define SEND_MAIL_WHEN_NO_USER 1

/* Define to 1 if the sha2 functions use `const void *' instead of `const
   unsigned char'. */
/* #undef SHA2_VOID_PTR */

/* Define to 1 if you want sudo to start a shell if given no arguments. */
/* #undef SHELL_IF_NO_ARGS */

/* Define to 1 if you want sudo to set $HOME in shell mode. */
/* #undef SHELL_SETS_HOME */

/* The size of `id_t', as computed by sizeof. */
#define SIZEOF_ID_T 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* Define to 1 to compile the sudoers plugin statically into the sudo binary.
   */
/* #undef STATIC_SUDOERS_PLUGIN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if the code in interfaces.c does not compile for you. */
/* #undef STUB_LOAD_INTERFACES */

/* An instance string to append to the username (separated by a slash) for
   Kerberos V authentication. */
/* #undef SUDO_KRB5_INSTANCE */

/* The umask that the sudo-run prog should use. */
#define SUDO_UMASK 0022

/* The number of minutes before sudo asks for a password again. */
#define TIMEOUT 5

/* Define to global, ppid or tty to set the default timestamp record type. */
#define TIMESTAMP_TYPE tty

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* The number of tries a user gets to enter their password. */
#define TRIES_FOR_PASSWORD 3

/* Define to 1 to use the umask specified in sudoers even when it is less
   restrictive than the invoking user's. */
/* #undef UMASK_OVERRIDE */

/* Define to 1 if the `unsetenv' function returns void instead of `int'. */
/* #undef UNSETENV_VOID */

/* Define to 1 if you want to create ~/.sudo_as_admin_successful if the user
   is in the admin group the first time they run sudo. */
/* #undef USE_ADMIN_FLAG */

/* Define to 1 if you want to insult the user for entering an incorrect
   password. */
/* #undef USE_INSULTS */

/* Define to 1 if you use GNU stow packaging. */
/* #undef USE_STOW */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to avoid using the passwd/shadow file for authentication. */
/* #undef WITHOUT_PASSWD */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to enable 64-bit versions of standard C functions on 32-bit
   systems. */
/* #undef _LARGEFILE64_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to __FUNCTION__ if your compiler supports __FUNCTION__ but not
   __func__ */
/* #undef __func__ */

/* Define to `int' if <time.h> does not define. */
/* #undef clockid_t */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
#define errno_t int

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long long' if <sys/types.h> does not define. */
/* #undef intmax_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to an OS-specific initialization function or `os_init_common'. */
#define os_init os_init_common

/* Define to `size_t' if <sys/types.h> does not define. */
#define rsize_t size_t

/* Define to `int' if <signal.h> does not define. */
/* #undef sig_atomic_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `unsigned int' if <sys/socket.h> doesn't define. */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef uint32_t */

/* Define to `unsigned long long' if <sys/types.h> does not define. */
/* #undef uint64_t */

/* Define to `unsigned char' if <sys/types.h> does not define. */
/* #undef uint8_t */

/* Define to `unsigned long long' if <sys/types.h> does not define. */
/* #undef uintmax_t */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */

/* BSD compatibility on some SVR4 systems. */
#ifdef __svr4__
# define BSD_COMP
#endif

/* Enable BSD extensions on systems that have them.  */
#ifndef _BSD_SOURCE
/* # undef _BSD_SOURCE */
#endif

/* Enable BSD types on IRIX.  */
#ifndef _BSD_TYPES
/* # undef _BSD_TYPES */
#endif

/* Enable Linux-compatible extensions on AIX.  */
#ifndef _LINUX_SOURCE_COMPAT
/* # undef _LINUX_SOURCE_COMPAT */
#endif

/* Enable prototypes in GCC fixed includes on older systems.  */
#ifndef __USE_FIXED_PROTOTYPES__
/* # undef __USE_FIXED_PROTOTYPES__ */
#endif

/* Enable XPG4v2 extensions to POSIX, needed for MSG_WAITALL on older HP-UX.  */
#ifndef _XOPEN_SOURCE_EXTENDED
/* # undef _XOPEN_SOURCE_EXTENDED */
#endif

/* Enable reentrant versions of the standard C API (obsolete).  */
#ifndef _REENTRANT
/* # undef _REENTRANT */
#endif

/* Enable "safer" versions of the standard C API (ISO C11).  */
#ifndef __STDC_WANT_LIB_EXT1__
# define __STDC_WANT_LIB_EXT1__ 1
#endif

/* Prevent static analyzers from genering bogus memory leak warnings. */
#if defined(__COVERITY__) && !defined(NO_LEAKS)
# define NO_LEAKS
#endif

#endif /* SUDO_CONFIG_H */
