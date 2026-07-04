/* Runtime dump - CoreDAVContainerMultiGetTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable>
{
    NSSet * _urls;
    NSString * _appSpecificNamespace;
    NSString * _appSpecificMultiGetNameSpace;
    NSString * _appSpecificMultiGetCommand;
    NSString * _appSpecificDataProp;
    Class _appSpecificDataItemClass;
    char _shouldIgnoreResponseErrors;
    NSSet * _additionalPropElements;
    NSSet * _parsedContents;
    NSSet * _missingURLs;
    NSSet * _deletedURLs;
}

@property (retain, nonatomic) NSSet * additionalPropElements;
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
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (id)copyAdditionalPropElements;
- (void)setAdditionalPropElements:(NSSet *)arg0;
- (NSSet *)additionalPropElements;
- (void)setAdditionalProperties:(NSDictionary *)arg0 onDataItem:(NSObject *)arg1;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSSet *)missingURLs;
- (NSSet *)deletedURLs;
- (NSSet *)parsedContents;
- (char)shouldIgnoreResponseErrors;
- (void)setShouldIgnoreResponseErrors:(char)arg0;
- (CoreDAVContainerMultiGetTask *)initWithURLs:(id)arg0 atContainerURL:(NSURL *)arg1 appSpecificDataItemClass:(Class)arg2;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;

@end
