/* Runtime dump - MCStateOperation
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCStateOperation : MCAction
{
    NSString * _stateKey;
}

@property (copy) NSString * stateKey;
@property (nonatomic) char alwaysNotifies;
@property (nonatomic) char recordsTime;

+ (MCStateOperation *)stateOperationForTargetPlugObjectID:(NSObject *)arg0 withStateKey:(NSString *)arg1;

- (NSString *)description;
- (void)setStateKey:(NSString *)arg0;
- (NSString *)stateKey;
- (void)demolish;
- (char)recordsTime;
- (char)alwaysNotifies;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCStateOperation *)initWithImprint:(NSDictionary *)arg0;
- (void)setAlwaysNotifies:(char)arg0;
- (void)setRecordsTime:(char)arg0;
- (NSDictionary *)imprint;

@end
