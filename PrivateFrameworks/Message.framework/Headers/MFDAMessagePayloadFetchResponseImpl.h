/* Runtime dump - MFDAMessagePayloadFetchResponseImpl
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse>
{
    char streaming;
    char streamingDone;
    NSData * data;
}

- (void)dealloc;
- (NSData *)data;
- (char)streaming;
- (char)streamingDone;
- (MFDAMessagePayloadFetchResponseImpl *)initWithData:(NSData *)arg0 streaming:(char)arg1 streamingDone:(char)arg2;

@end
