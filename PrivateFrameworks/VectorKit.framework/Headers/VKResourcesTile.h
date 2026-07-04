/* Runtime dump - VKResourcesTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKResourcesTile : VKTile
{
    NSArray * _resourceNames;
    NSArray * _attributions;
}

@property (retain, nonatomic) NSArray * resourceNames;
@property (retain, nonatomic) NSArray * attributions;

- (void)dealloc;
- (NSArray *)attributions;
- (NSArray *)resourceNames;
- (void)setResourceNames:(NSArray *)arg0;
- (void)setAttributions:(NSArray *)arg0;

@end
