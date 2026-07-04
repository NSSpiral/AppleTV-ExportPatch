/* Runtime dump - ATVCarouselViewUIOpContext
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVChainedAnimationGroup;
@interface ATVCarouselViewUIOpContext : NSObject
{
    char _previousCompletionException;
    double _previousCompletionTime;
    struct ATVCarouselViewItemsConfig _previousItemsConfig;
    double _startTime;
    char _processed;
    char _completed;
    int _type;
    id _typeInfo;
    int _direction;
    ATVChainedAnimationGroup * _chainedAnimationGroup;
    ATVCarouselViewUIOpContext * _precedingContext;
    id _itemQueryHandler;
    id _preProcessingBlock;
    id _completionBlock;
    id _cleanUpBlock;
    struct ATVCarouselViewItemsConfig _itemsConfig;
}

@property (nonatomic) int type;
@property (retain, nonatomic) id typeInfo;
@property (nonatomic) struct ATVCarouselViewItemsConfig itemsConfig;
@property (nonatomic) int direction;
@property (readonly, nonatomic) char isWaitingForPreviousCompletion;
@property (readonly, nonatomic) struct ATVCarouselViewItemsConfig previousItemsConfig;
@property (retain, nonatomic) ATVChainedAnimationGroup * chainedAnimationGroup;
@property (retain, nonatomic) ATVCarouselViewUIOpContext * precedingContext;
@property (copy, nonatomic) id itemQueryHandler;
@property (nonatomic) char processed;
@property (nonatomic) char completed;
@property (copy, nonatomic) id preProcessingBlock;
@property (copy, nonatomic) id completionBlock;
@property (copy, nonatomic) id cleanUpBlock;

- (NSSet *)itemAtOffset:(int)arg0;
- (struct ATVCarouselViewItemsConfig)itemsConfig;
- (ATVChainedAnimationGroup *)chainedAnimationGroup;
- (char)isWaitingForPreviousCompletion;
- (ATVCarouselViewUIOpContext *)precedingContext;
- (void)_setCompleted:(char)arg0 preemptedDuration:(double)arg1;
- (void)setPrecedingContext:(ATVCarouselViewUIOpContext *)arg0;
- (char)processed;
- (void)setChainedAnimationGroup:(ATVChainedAnimationGroup *)arg0;
- (id /* block */)itemQueryHandler;
- (void)setPreProcessingBlock:(id /* block */)arg0;
- (void)setItemQueryHandler:(id /* block */)arg0;
- (id /* block */)cleanUpBlock;
- (void)setCleanUpBlock:(id /* block */)arg0;
- (struct ATVCarouselViewItemsConfig)previousItemsConfig;
- (NSDictionary *)typeInfo;
- (void)setTypeInfo:(NSDictionary *)arg0;
- (void)setItemsConfig:(struct ATVCarouselViewItemsConfig)arg0;
- (void)setProcessed:(char)arg0;
- (id /* block */)preProcessingBlock;
- (char)completed;
- (void)setCompleted:(char)arg0;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)invalidate;
- (void)setType:(int)arg0;
- (int)type;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (void)setDirection:(int)arg0;
- (int)direction;
- (void).cxx_destruct;

@end
