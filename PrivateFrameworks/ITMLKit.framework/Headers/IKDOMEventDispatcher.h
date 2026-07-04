/* Runtime dump - IKDOMEventDispatcher
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMEventDispatcher : NSObject

+ (IKDOMEventDispatcher *)sharedInstance;

- (char)_runPhase:(int)arg0 event:(NSString *)arg1 nodeEn:(id)arg2;
- (char)dispatchEvent:(NSObject *)arg0;

@end
