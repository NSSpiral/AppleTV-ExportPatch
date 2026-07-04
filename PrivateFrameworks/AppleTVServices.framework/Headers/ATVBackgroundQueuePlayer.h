/* Runtime dump - ATVBackgroundQueuePlayer
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBackgroundQueuePlayer : AVQueuePlayer

- (int)_itemOkayToPlayWhileTransitioningToBackground:(NSNotification *)arg0;
- (char)_shouldDetachContentLayersFromFigPlayer;

@end
