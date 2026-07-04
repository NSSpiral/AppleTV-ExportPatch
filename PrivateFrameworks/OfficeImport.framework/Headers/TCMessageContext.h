/* Runtime dump - TCMessageContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessageContext : NSObject
{
    NSMutableSet * m_warnings;
    NSMutableSet * m_errors;
    NSMutableArray * m_currentObjectStack;
    NSMutableDictionary * m_placeholderToObjectIdMap;
    NSObject<OS_dispatch_queue> * mMessageSyncQueue;
}

+ (void)initialize;
+ (void)reportObjectOrPlaceholder:(id)arg0 withWarning:(struct TCTaggedMessageStructure *)arg1 parameters:(void *)arg2;
+ (TCMessageContext *)currentObjectOrPlaceholder;
+ (void)replacePlaceholdersWithObjects;
+ (void)popCurrentPlaceholder:(id)arg0;
+ (void)popCurrentObject;
+ (void)reportObject:(NSObject *)arg0 withWarning:(struct TCTaggedMessageStructure *)arg1;
+ (void)reportError:(struct TCTaggedMessageStructure *)arg0;
+ (void)reportWarningException:(NSException *)arg0;
+ (void)reportErrorException:(NSException *)arg0;
+ (void)createContextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (NSArray *)getWarningArray;
+ (NSArray *)getErrorArray;
+ (void)setIsFileStructuredStorage:(char)arg0;
+ (char)isFileStructuredStorage;
+ (void)pushCurrentObject:(NSObject *)arg0;
+ (NSString *)pushCurrentPlaceholder;
+ (void)setObject:(NSObject *)arg0 forPlaceholder:(PBPlaceholder *)arg1;
+ (unsigned int)saveObjectStack;
+ (void)restoreObjectStack:(unsigned int)arg0;
+ (void)reportWarning:(struct TCTaggedMessageStructure *)arg0;

- (void)dealloc;
- (TCMessageContext *)init;
- (NSObject<OS_xpc_object> *)currentObject;
- (void)addErrorMessageEntry:(id)arg0;
- (void)addWarningMessageEntry:(id)arg0;
- (void)pushObject:(NSObject *)arg0;
- (void)popObject;
- (NSString *)pushPlaceholder;
- (void)popPlaceholder:(id)arg0;
- (void)replacePlaceholdersWithObjects;
- (void)setObject:(NSObject *)arg0 forPlaceholderKey:(NSString *)arg1;
- (void)reportWarningForObject:(NSObject *)arg0 affectedObject:(NSObject *)arg1 warning:(struct TCTaggedMessageStructure *)arg2 parameterList:(void *)arg3;

@end
