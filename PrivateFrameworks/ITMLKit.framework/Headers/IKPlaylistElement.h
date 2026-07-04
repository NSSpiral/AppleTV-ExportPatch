/* Runtime dump - IKPlaylistElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKPlaylistElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray * items;
@property (readonly, retain, nonatomic) IKAppDOMPlayer * player;

+ (NSMutableDictionary *)supportedFeatures;

- (NSArray *)items;
- (IKAppDOMPlayer *)player;

@end
