/* Runtime dump - AXValidationManager
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXValidationManager : NSObject
{
    char _shouldLogToConsole;
    char _shouldCrashOnError;
    char _shouldReportToServer;
    char _forceDoNotReport;
    char _debugBuild;
    unsigned int _numberOfValidationErrors;
    NSString * _validationTargetName;
    NSString * _overrideProcessName;
    NSMutableArray * _consoleErrorMessages;
    <AXValidationReportingServices> * _validationReportingServices;
}

@property (nonatomic) char forceDoNotReport;
@property (copy, nonatomic) NSString * validationTargetName;
@property (copy, nonatomic) NSString * overrideProcessName;
@property (nonatomic) char debugBuild;
@property (nonatomic) char shouldLogToConsole;
@property (nonatomic) char shouldCrashOnError;
@property (nonatomic) char shouldReportToServer;
@property (nonatomic) unsigned int numberOfValidationErrors;
@property (retain, nonatomic) NSMutableArray * consoleErrorMessages;
@property (retain, nonatomic) <AXValidationReportingServices> * validateionReportingServices;

+ (AXValidationManager *)sharedInstance;

- (void)dealloc;
- (AXValidationManager *)init;
- (void)sendExceptionForSafeValueKey:(NSString *)arg0 onTarget:(NSObject *)arg1 overrideProcessName:(NSString *)arg2;
- (void)sendExceptionForSafeIVarKey:(NSString *)arg0 onTarget:(NSObject *)arg1 overrideProcessName:(NSString *)arg2;
- (void)sendExceptionForSafeBlock:(id /* block */)arg0 overrideProcessName:(NSString *)arg1;
- (void)setValidateionReportingServices:(<AXValidationReportingServices> *)arg0;
- (void)setOverrideProcessName:(NSString *)arg0;
- (void)setValidationTargetName:(NSString *)arg0;
- (void)setConsoleErrorMessages:(NSMutableArray *)arg0;
- (void)performValidations:(id)arg0 withPreValidationHandler:(/* block */ id)arg1 postValidationHandler:(id /* block */)arg2 safeCategoryInstallationHandler:(/* block */ id)arg3;
- (void)setNumberOfValidationErrors:(unsigned int)arg0;
- (void)setForceDoNotReport:(char)arg0;
- (void)setDebugBuild:(char)arg0;
- (void)setShouldLogToConsole:(char)arg0;
- (void)setShouldCrashOnError:(char)arg0;
- (void)setShouldReportToServer:(char)arg0;
- (NSString *)validationTargetName;
- (unsigned int)numberOfValidationErrors;
- (void)_printConsoleReport:(char)arg0 isDelayed:(char)arg1;
- (void)installSafeCategories:(id)arg0 afterDelay:(/* block */ id)arg1 validationTargetName:(double)arg2 overrideProcessName:(NSString *)arg3 forceDoNotReport:(char)arg4;
- (char)isDebugBuild;
- (NSMutableArray *)consoleErrorMessages;
- (NSString *)overrideProcessName;
- (void)sendValidateExceptionForClass:(NSObject *)arg0 errorMessage:(NSString *)arg1 overrideProcessName:(NSString *)arg2;
- (void)sendValidateExceptionForClass:(NSObject *)arg0 isKindOfClass:(NSObject *)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (void)sendValidateExceptionForClass:(NSObject *)arg0 hasInstanceVariable:(id)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (void)sendValidateExceptionForClass:(NSObject *)arg0 hasInstanceMethod:(NSString *)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (void)sendValidateExceptionForClass:(NSObject *)arg0 hasClassMethod:(NSString *)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (char)_validateClass:(NSObject *)arg0 hasMethod:(char)arg1 methodType:(int)arg2 returnType:(NSObject *)arg3 arguments:(NSDictionary *)arg4;
- (char)_validateClass:(NSObject *)arg0 hasMethod:(char)arg1 methodType:(int)arg2;
- (void)sendValidateExceptionForClass:(NSObject *)arg0 hasProperty:(char)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (void)sendValidateExceptionForClass:(NSObject *)arg0 conformsToProtocol:(NSObject *)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (void)sendValidateExceptionForProtocol:(NSObject *)arg0 hasMethod:(char)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (char)validateProtocol:(NSObject *)arg0 hasMethod:(char)arg1 isInstanceMethod:(char)arg2 isRequired:(char)arg3;
- (void)sendValidateExceptionForProtocol:(NSObject *)arg0 hasProperty:(char)arg1 errorMessage:(NSString *)arg2 overrideProcessName:(NSString *)arg3;
- (char)installSafeCategory:(NSString *)arg0 canInteractWithTargetClass:(char)arg1;
- (void)sendExceptionForInstallingSafeCategory:(NSString *)arg0 onTarget:(NSObject *)arg1 overrideProcessName:(NSString *)arg2;
- (<AXValidationReportingServices> *)validateionReportingServices;
- (void)sendGenericReport:(id)arg0 withTag:(NSString *)arg1 overrideProcessName:(NSString *)arg2;
- (void)sendFailedAssertionWithErrorMessage:(NSString *)arg0 overrideProcessName:(NSString *)arg1;
- (void)sendFailedTestCase:(id)arg0 withTag:(NSString *)arg1 overrideProcessName:(NSString *)arg2;
- (void)performValidations:(id)arg0 withPreValidationHandler:(/* block */ id)arg1 postValidationHandler:(id /* block */)arg2;
- (void)installSafeCategories:(id)arg0 afterDelay:(/* block */ id)arg1 validationTargetName:(double)arg2 overrideProcessName:(NSString *)arg3;
- (char)validateClass:(NSObject *)arg0;
- (char)validateClass:(NSObject *)arg0 isKindOfClass:(NSObject *)arg1;
- (char)validateClass:(NSObject *)arg0 hasInstanceVariable:(id)arg1;
- (char)validateClass:(NSObject *)arg0 hasInstanceVariable:(id)arg1 withType:(char *)arg2;
- (char)validateClass:(NSObject *)arg0 hasClassMethod:(NSString *)arg1 withFullSignature:(char *)arg2;
- (char)validateClass:(NSObject *)arg0 hasInstanceMethod:(NSString *)arg1 withFullSignature:(char *)arg2;
- (char)validateClass:(NSObject *)arg0 hasInstanceMethod:(NSString *)arg1;
- (char)validateClass:(NSObject *)arg0 hasClassMethod:(NSString *)arg1;
- (char)validateClass:(NSObject *)arg0 hasProperty:(char)arg1;
- (char)validateClass:(NSObject *)arg0 conformsToProtocol:(NSObject *)arg1;
- (char)validateProtocol:(NSObject *)arg0 hasOptionalInstanceMethod:(NSString *)arg1;
- (char)validateProtocol:(NSObject *)arg0 hasRequiredInstanceMethod:(NSString *)arg1;
- (char)validateProtocol:(NSObject *)arg0 hasOptionalClassMethod:(NSString *)arg1;
- (char)validateProtocol:(NSObject *)arg0 hasRequiredClassMethod:(NSString *)arg1;
- (char)validateProtocol:(NSObject *)arg0 hasProperty:(char)arg1;
- (char)installSafeCategory:(NSString *)arg0;
- (char)shouldLogToConsole;
- (char)shouldCrashOnError;
- (char)shouldReportToServer;
- (char)forceDoNotReport;

@end
