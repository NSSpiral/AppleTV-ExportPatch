/* Runtime dump - MCAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAction : MCObjectLight
{
    unsigned long _flags;
    NSString * _targetObjectID;
}

@property (copy) NSString * targetObjectID;
@property (nonatomic) char tracksInParent;

- (NSString *)description;
- (UIView *)snapshot;
- (void)setTargetObjectID:(NSString *)arg0;
- (void)demolish;
- (NSString *)targetObjectID;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (char)isSnapshot;
- (MCAction *)initWithImprint:(NSDictionary *)arg0;
- (char)tracksInParent;
- (void)setTracksInParent:(char)arg0;
- (NSDictionary *)imprint;

@end
