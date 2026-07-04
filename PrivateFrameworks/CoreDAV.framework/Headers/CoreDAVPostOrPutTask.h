/* Runtime dump - CoreDAVPostOrPutTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask
{
    char _forceToServer;
    NSString * _previousETag;
    NSString * _requestDataContentType;
    NSData * _requestDataPayload;
    char _sendOrder;
    int _absoluteOrder;
    NSURL * _priorOrderedURL;
}

@property (nonatomic) char forceToServer;
@property (retain, nonatomic) NSURL * priorOrderedURL;
@property (nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSString * previousETag;
@property (retain, nonatomic) NSData * requestDataPayload;
@property (retain, nonatomic) NSString * requestDataContentType;

- (void)dealloc;
- (NSString *)description;
- (CoreDAVPostOrPutTask *)initWithURL:(NSString *)arg0;
- (NSData *)requestBody;
- (NSDictionary *)additionalHeaderValues;
- (int)absoluteOrder;
- (CoreDAVPostOrPutTask *)initWithDataPayload:(NSData *)arg0 dataContentType:(NSString *)arg1 atURL:(NSURL *)arg2 previousETag:(NSString *)arg3;
- (void)setAbsoluteOrder:(int)arg0;
- (void)setPriorOrderedURL:(NSURL *)arg0;
- (NSString *)previousETag;
- (void)setPreviousETag:(NSString *)arg0;
- (char)forceToServer;
- (NSData *)requestDataPayload;
- (NSString *)requestDataContentType;
- (void)setForceToServer:(char)arg0;
- (void)setRequestDataContentType:(NSString *)arg0;
- (void)setRequestDataPayload:(NSData *)arg0;
- (NSURL *)priorOrderedURL;

@end
