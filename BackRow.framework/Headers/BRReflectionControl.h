/* Runtime dump - BRReflectionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRReflectionControl : BRControl
{
    float _reflectionAmount;
    float _reflectionOffset;
    char _flipped;
}

- (void)setReflectionAmount:(float)arg0;
- (float)reflectionAmount;
- (void)setReflectionOffset:(float)arg0;
- (float)reflectionOffset;
- (id)_reflectionFilters;
- (id)_unflippedReflectionFilters;
- (char)flipped;
- (NSObject *)_generateFiltersFrom:(float)arg0 to:(float)arg1;
- (void)setImage:(ATVImage *)arg0;
- (BRReflectionControl *)init;
- (void)setFlipped:(char)arg0;

@end
