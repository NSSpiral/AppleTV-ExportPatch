/* Runtime dump - DRMData
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface DRMData : NSObject
{
    NSString * drmSystemID;
    NSData * data;
}

+ (NSObject *)playReadyID;
+ (NSObject *)netflixKeyEnvelopeID;
+ (void)initialize;

- (DRMData *)initWithBuffer:(Buffer *)arg0 length:(unsigned int)arg1;
- (NSObject *)getDRMSystemID;
- (NSData *)getData;
- (void).cxx_destruct;

@end
