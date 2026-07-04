/* Runtime dump - CoreDAVMultiGetWithFallbackTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable>
{
    char _shouldIgnoreResponseErrors;
    char _usingMultiGet;
    CoreDAVContainerMultiGetTask * _multiGetTask;
    id _getBlock;
    NSMutableSet * _urls;
    NSMutableSet * _parsedContents;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) id completionBlock;
@property (nonatomic) <CoreDAVTaskManager> * taskManager;
@property (nonatomic) <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property (readonly, nonatomic) NSError * error;
@property (nonatomic) double timeoutInterval;
@property (readonly, nonatomic) NSSet * missingURLs;
@property (readonly, nonatomic) NSSet * deletedURLs;
@property (readonly, nonatomic) NSSet * parsedContents;
@property (nonatomic) char shouldIgnoreResponseErrors;

- (void)dealloc;
- (NSError *)error;
- (void)startTaskGroup;
- (NSSet *)missingURLs;
- (NSSet *)deletedURLs;
- (NSSet *)parsedContents;
- (char)shouldIgnoreResponseErrors;
- (void)setShouldIgnoreResponseErrors:(char)arg0;
- (void)_fetchOneItem;
- (void)_configureAndSubmitTask:(NSObject *)arg0;
- (void)_switchToSingleGetMode;
- (CoreDAVMultiGetWithFallbackTaskGroup *)initWithURLs:(id)arg0 multiGetBlock:(id /* block */)arg1 getBlock:(/* block */ id)arg2 accountInfoProvider:(<CoreDAVAccountInfoProvider> *)arg3 taskManager:(/* block */ id)arg4;

@end
