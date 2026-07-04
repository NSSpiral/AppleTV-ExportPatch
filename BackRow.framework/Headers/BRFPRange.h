/* Runtime dump - BRFPRange
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRFPRange : NSObject
{
    float _location;
    float _length;
}

@property (readonly, nonatomic) float location;
@property (readonly, nonatomic) float length;

- (BRFPRange *)initWithLocation:(float)arg0 andLength:(float)arg1;
- (char)rangeIncludesLocation:(float)arg0;
- (float)length;
- (float)location;

@end
