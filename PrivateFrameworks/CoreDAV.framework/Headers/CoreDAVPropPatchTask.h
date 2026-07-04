/* Runtime dump - CoreDAVPropPatchTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask
{
    NSSet * _propPatchRemoveElements;
    NSSet * _propPatchSetElements;
    CoreDAVResponseItem * _responseItem;
    char _sendOrder;
    int _absoluteOrder;
    NSURL * _priorOrderedURL;
}

@property (nonatomic) <CoreDAVPropPatchTaskDelegate> * delegate;
@property (retain, nonatomic) NSURL * priorOrderedURL;
@property (nonatomic) int absoluteOrder;
@property (retain, nonatomic) CoreDAVResponseItem * responseItem;
@property (retain, nonatomic) NSSet * propPatchRemoveElements;
@property (retain, nonatomic) NSSet * propPatchSetElements;

- (void)dealloc;
- (NSString *)description;
- (CoreDAVPropPatchTask *)initWithURL:(NSString *)arg0;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (NSDictionary *)additionalHeaderValues;
- (int)absoluteOrder;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (void)setAbsoluteOrder:(int)arg0;
- (void)setPriorOrderedURL:(NSURL *)arg0;
- (NSURL *)priorOrderedURL;
- (NSSet *)propPatchSetElements;
- (NSSet *)propPatchRemoveElements;
- (void)setResponseItem:(CoreDAVResponseItem *)arg0;
- (CoreDAVResponseItem *)responseItem;
- (CoreDAVPropPatchTask *)initWithPropertiesToSet:(NSSet *)arg0 andRemove:(id)arg1 atURL:(NSURL *)arg2;
- (void)setPropPatchRemoveElements:(NSSet *)arg0;
- (void)setPropPatchSetElements:(NSSet *)arg0;

@end
