/* Runtime dump - SCRCPhotoEvaluatorResultPeople
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultPeople : SCRCPhotoEvaluatorResult
{
    struct CGSize _imageSize;
    NSArray * _people;
}

@property (readonly, nonatomic) NSArray * people;

- (void)dealloc;
- (NSArray *)people;
- (NSObject *)humanReadableResult;
- (SCRCPhotoEvaluatorResultPeople *)initWithPeople:(NSArray *)arg0 inImageOfSize:(struct CGSize)arg1;

@end
