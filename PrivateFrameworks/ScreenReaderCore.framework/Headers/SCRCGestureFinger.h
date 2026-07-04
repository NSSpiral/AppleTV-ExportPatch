/* Runtime dump - SCRCGestureFinger
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCGestureFinger : NSObject
{
    unsigned int _identifier;
    struct CGPoint _location;
}

- (NSString *)description;
- (unsigned int)identifier;
- (struct CGPoint)location;
- (SCRCGestureFinger *)initWithIdentifier:(unsigned int)arg0 location:(struct CGPoint)arg1;

@end
