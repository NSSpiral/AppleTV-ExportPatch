/* Runtime dump - BRGlobalGestureRecognizerManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRGlobalGestureRecognizerManager : NSObject

+ (BRGlobalGestureRecognizerManager *)sharedInstance;

- (void)installGlobalGestureRecognizers:(id)arg0;
- (void)sendRepeatingTouchedBREventFromButtonTypeOfRecognizer:(NSObject *)arg0;
- (void)sendTappedBREventFromButtonTypeOfRecognizer:(NSObject *)arg0;
- (void)sendHoldBREventFromButtonTypeOfRecognizer:(NSObject *)arg0;
- (void)_installRepeatingButtonRecognizer:(int)arg0 inView:(struct CGSize)arg1 originator:(unsigned int)arg2 eventAction:(int)arg3;
- (void)_installTapRecognizer:(int)arg0 inView:(struct CGSize)arg1 originator:(unsigned int)arg2 singleTapEventAction:(int)arg3 doubleTapEventAction:(int)arg4;
- (void)_installHoldRecognizer:(int)arg0 inView:(struct CGSize)arg1 originator:(unsigned int)arg2 eventAction:(int)arg3;
- (void)handlePanGesture:(NSObject *)arg0;
- (void)handleTapGesture:(NSObject *)arg0;
- (void)handleDoubleTapGesture:(NSObject *)arg0;
- (NSObject *)_filteredKeyboardTextInput:(NSObject *)arg0;
- (void)_dispatchEventAction:(int)arg0 andValue:(int)arg1 buttonType:(int)arg2 repeatCount:(unsigned int)arg3 originator:(unsigned int)arg4 extraEventInfo:(NSDictionary *)arg5;
- (void)_dispatchEventAction:(int)arg0 forGesture:(NSObject *)arg1 buttonType:(int)arg2 originator:(unsigned int)arg3;
- (void)_handleKeyboardTextInput:(NSObject *)arg0;
- (void)_handleRepeatedKeyboardTextInput:(NSObject *)arg0;
- (void)_dispatchEvent:(NSObject *)arg0;

@end
