/* Runtime dump - ATVMultistateProgressIndicator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVMultistateProgressIndicator : BRControl
{
    id _currentStateID;
    NSMutableDictionary * _states;
    float _value;
}

- (void)setProgressIndicatorImageBatch:(id)arg0 forState:(NSObject *)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (ATVMultistateProgressIndicator *)init;
- (CAState *)state;
- (void)setState:(NSObject *)arg0;
- (float)value;
- (void)setValue:(float)arg0;

@end
