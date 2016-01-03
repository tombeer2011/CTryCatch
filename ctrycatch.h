#pragma once
#ifndef ctrycatch_h
#define ctrycatch_h

#include <setjmp.h>

#define try           if(!(exception_type=setjmp(exception_env)))
#define catch(X)      else if((X +0)==0||exception_type==(X +0))
#define finally
#define throw(X,...)  exception_message=(__VA_ARGS__  +0),longjmp(exception_env,(X))

enum exception_type {
    Exception, // Caution: 0 **IS** defined as "no error" to make it work.
    AccessViolationException,
    AppDomainUnloadedException,
    ApplicationException,
    ArgumentException,
    ArgumentNullException,
    ArgumentOutOfRangeException,
    ArithmeticException,
    ArrayTypeMismatchException,
    BadImageFormatException,
    CannotUnloadAppDomainException,
    ContextMarshalException,
    DataMisalignedException,
    DivideByZeroException,
    DllNotFoundException,
    DuplicateWaitObjectException,
    EntryPointNotFoundException,
    ExecutionEngineException,
    FieldAccessException,
    FormatException,
    IndexOutOfRangeException,
    InsufficientMemoryException,
    InvalidCastException,
    InvalidOperationException,
    InvalidProgramException,
    MemberAccessException,
    MethodAccessException,
    MissingFieldException,
    MissingMemberException,
    MissingMethodException,
    MulticastNotSupportedException,
    NotFiniteNumberException,
    NotImplementedException,
    NotSupportedException,
    NullReferenceException,
    ObjectDisposedException,
    OperationCanceledException,
    OutOfMemoryException,
    OverflowException,
    PlatformNotSupportedException,
    RankException,
    StackOverflowException,
    SystemException,
    TimeoutException,
    TypeInitializationException,
    TypeLoadException,
    TypeUnloadedException,
    UnauthorizedAccessException,
    KeyNotFoundException,
    DirectoryNotFoundException,
    DriveNotFoundException,
    EndOfStreamException,
    FileLoadException,
    FileNotFoundException,
    IOException,
    PathTooLongException,
    IsolatedStorageException,
    AmbiguousMatchException,
    CustomAttributeFormatException,
    InvalidFilterCriteriaException,
    MetadataException,
    ReflectionTypeLoadException,
    TargetException,
    TargetInvocationException,
    TargetParameterCountException,
    MissingManifestResourceException,
    MissingSatelliteAssemblyException,
    RuntimeWrappedException,
    COMException,
    ExternalException,
    InvalidComObjectException,
    InvalidOleVariantTypeException,
    MarshalDirectiveException,
    SafeArrayRankMismatchException,
    SafeArrayTypeMismatchException,
    SEHException,
    RepresentsStructuredExceptionHandler(SEH)errors.,
    RemotingException,
    RemotingTimeoutException,
    ServerException,
    SerializationException,
    HostProtectionException,
    SecurityException,
    VerificationException,
    XmlSyntaxException,
    PrivilegeNotHeldException,
    CryptographicException,
    CryptographicUnexpectedOperationException,
    PolicyException,
    IdentityNotMappedException,
    DecoderFallbackException,
    EncoderFallbackException,
    AbandonedMutexException,
    SynchronizationLockException,
    ThreadAbortException,
    ThreadInterruptedException,
    ThreadStartException,
    ThreadStateException,
    WaitHandleCannotBeOpenedException,
    Contract+AssertionException,
    Contract+AssumptionException,
    Contract+InvariantException,
    Contract+PostconditionException,
    Contract+PreconditionException,
    AddInBaseInAddInFolderException,
    AddInSegmentDirectoryNotFoundException,
    InvalidPipelineStoreException,
    GenericsNotImplementedException,
    ConfigurationErrorsException,
    ProviderException,
    InstallException,
    ModuleLoadException,
    ModuleLoadExceptionHandlerException,
    InvalidUdtException,
    ConstraintException,
    DataException,
    DBConcurrencyException,
    DeletedRowInaccessibleException,
    DuplicateNameException,
    EvaluateException,
    InRowChangingEventException,
    InvalidConstraintException,
    InvalidExpressionException,
    MissingPrimaryKeyException,
    NoNullAllowedException,
    OperationAbortedException,
    ReadOnlyException,
    RowNotInTableException,
    StrongTypingException,
    SyntaxErrorException,
    TypedDataSetGeneratorException,
    VersionNotFoundException,
    DbException,
    OdbcException,
    OleDbException,
    SqlException,
    SqlAlreadyFilledException,
    SqlNotFilledException,
    SqlNullValueException,
    SqlTruncateException,
    SqlTypeException,
    InvalidPrinterException,
    DirectoryServicesCOMException,
    ActiveDirectoryObjectExistsException,
    ActiveDirectoryObjectNotFoundException,
    ActiveDirectoryOperationException,
    ActiveDirectoryServerDownException,
    ForestTrustCollisionException,
    SyncFromAllServersOperationException,
    ManagementException,
    MessageQueueException,
    TimeoutException,
    HttpCompileException,
    HttpException,
    HttpParseException,
    HttpRequestValidationException,
    HttpUnhandledException,
    DatabaseNotEnabledForNotificationException,
    TableNotEnabledForNotificationException,
    HostingEnvironmentException,
    SqlExecutionException,
    MembershipCreateUserException,
    MembershipPasswordException,
    ViewStateException,
    AxHost+InvalidActiveXStateException,
    CodeDomSerializerException,
    DataSourceGeneratorException,
    DataSourceSerializationException,
    InternalException,
    NameValidationException,
    TypedDataSetGeneratorException,
    XmlException,
    UpaException,
    XmlSchemaException,
    XmlSchemaInferenceException,
    XmlSchemaValidationException,
    XPathException,
    XsltCompileException,
    XsltException,
    UriFormatException,
    InvalidAsynchronousStateException,
    InvalidEnumArgumentException,
    LicenseException,
    WarningException,
    Win32Exception,
    CheckoutException,
    ConfigurationException,
    SettingsPropertyIsReadOnlyException,
    SettingsPropertyNotFoundException,
    SettingsPropertyWrongTypeException,
    InternalBufferOverflowException,
    InvalidDataException,
    CookieException,
    HttpListenerException,
    InternalException,
    ProtocolViolationException,
    WebException,
    SmtpException,
    SmtpFailedRecipientException,
    SmtpFailedRecipientsException,
    NetworkInformationException,
    PingException,
    SocketException,
    AuthenticationException,
    InvalidCredentialException,
    SemaphoreFullException,
};

typedef int exception_types;
extern jmp_buf exception_env;
extern exception_types exception_type;
extern char *exception_message;

#endif /* error_handler_h */