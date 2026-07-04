/* Runtime dump - SBJsonStreamWriterAccumulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol SBJsonStreamWriterDelegate;

@class SBJsonStreamWriter;
@interface SBJsonStreamWriterAccumulator : NSObject <SBJsonStreamWriterDelegate>
{
    NSMutableData * data;
}

@property (readonly, copy) NSData * data;

- (void)writer:(SBJsonStreamWriter *)arg0 appendBytes:(void *)arg1 length:(void)arg2;
- (SBJsonStreamWriterAccumulator *)init;
- (NSData *)data;
- (void).cxx_destruct;

@end
