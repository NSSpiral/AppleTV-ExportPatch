/* Runtime dump - OBCapabilities
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface OBCapabilities : NSObject
{
    char _preventURLDataDetection;
    char _preventOpeningSafari;
}

@property (nonatomic) char preventURLDataDetection;
@property (nonatomic) char preventOpeningSafari;

+ (OBCapabilities *)sharedCapabilities;

- (char)isWAPI;
- (char)preventURLDataDetection;
- (void)setPreventURLDataDetection:(char)arg0;
- (char)preventOpeningSafari;
- (void)setPreventOpeningSafari:(char)arg0;

@end
