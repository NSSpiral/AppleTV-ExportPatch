/* Runtime dump - BWImageQueueSinkNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWImageQueueSinkNode : BWSinkNode
{
    unsigned int _imageQueueCapacity;
    unsigned int _imageQueueWidth;
    unsigned int _imageQueueHeight;
    unsigned int _imageQueueFreeSlots;
    struct _CAImageQueue * _imageQueue;
    unsigned int _imageQueueSlot;
    char _syncedWithDisplay;
    struct OpaqueFigPreviewSynchronizer * _previewSynchronizer;
    <BWImageQueueSinkNodePreviewTapDelegate> * _previewTapDelegate;
}

@property (readonly, nonatomic) struct _CAImageQueue * imageQueue;
@property (readonly, nonatomic) unsigned int imageQueueSlot;
@property (nonatomic) <BWImageQueueSinkNodePreviewTapDelegate> * previewTapDelegate;

+ (void)initialize;

- (void)dealloc;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BWImageQueueSinkNode *)initWithHFRSupport:(unsigned char)arg0;
- (void)setPreviewTapDelegate:(<BWImageQueueSinkNodePreviewTapDelegate> *)arg0;
- (unsigned int)imageQueueSlot;
- (struct _CAImageQueue *)imageQueue;
- (void)setSyncedWithDisplay:(char)arg0;
- (void)makeCurrentConfigurationLive;
- (char)hasNonLiveConfigurationChanges;
- (void)_ensureImageQueue;
- (char)syncedWithDisplay;
- (<BWImageQueueSinkNodePreviewTapDelegate> *)previewTapDelegate;

@end
