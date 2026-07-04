/* Runtime dump - AXVoiceOverServer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXVoiceOverServer : AXServer

+ (NSXPCConnection *)server;

- (char)_connectIfNecessary;
- (NSString *)_serviceName;
- (id)lastSpokenPhrases;
- (id)lastSoundsPlayed;
- (NSString *)currentRotorName;
- (NSDictionary *)lastScreenChange;
- (NSObject *)currentFocusedElement;
- (char)triggerCommand:(int)arg0;

@end
