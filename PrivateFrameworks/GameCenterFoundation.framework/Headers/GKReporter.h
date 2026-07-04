/* Runtime dump - GKReporter
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKReporter : NSObject

+ (GKReporter *)reporter;

- (void)report:(AWDWifiCallingCallEndReport *)arg0;
- (void)_nativeReport:(id)arg0 signature:(NSObject *)arg1 result:(char *)arg2;
- (void)report:(AWDWifiCallingCallEndReport *)arg0 signature:(NSObject *)arg1 result:(char)arg2;
- (void)report:(AWDWifiCallingCallEndReport *)arg0 signature:(NSObject *)arg1;

@end
