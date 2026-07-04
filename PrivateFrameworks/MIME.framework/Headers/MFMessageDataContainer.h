/* Runtime dump - MFMessageDataContainer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageDataContainer : NSObject
{
    NSData * _data;
    char _partial;
    char _incomplete;
}

- (void)dealloc;
- (NSData *)data;
- (MFMessageDataContainer *)initWithData:(NSData *)arg0;
- (MFMessageDataContainer *)initWithData:(NSData *)arg0 partial:(char)arg1 incomplete:(char)arg2;

@end
