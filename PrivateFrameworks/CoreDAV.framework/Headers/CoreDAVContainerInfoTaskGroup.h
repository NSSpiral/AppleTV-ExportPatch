/* Runtime dump - CoreDAVContainerInfoTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    int _phase;
    NSMutableSet * _containerURLs;
    NSMutableSet * _containers;
    int _containerInfoDepth;
    NSString * _appSpecificHomeSetPropNameSpace;
    NSString * _appSpecificHomeSetPropName;
}

@property (nonatomic) int containerInfoDepth;
@property (nonatomic) <CoreDAVContainerInfoTaskGroupDelegate> * delegate;
@property (readonly, nonatomic) NSSet * containerURLs;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (CoreDAVContainerInfoTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 containerURLs:(NSSet *)arg1 taskManager:(NSObject *)arg2;
- (int)containerInfoDepth;
- (int)containerInfoDepthForURL:(NSURL *)arg0;
- (NSURL *)_copyContainerWithURL:(NSString *)arg0 andProperties:(NSDictionary *)arg1;
- (id)_copyContainerParserMappings;
- (void)setContainerInfoDepth:(int)arg0;
- (void)_getContainerTopLevelInfo;
- (void)_getContainerHomeSet;
- (void)taskGroupWillCancelWithError:(NSError *)arg0;
- (void)propFindTask:(NSObject *)arg0 parsedResponses:(id)arg1 error:(NSError *)arg2;
- (void)startTaskGroup;
- (NSSet *)containerURLs;

@end
