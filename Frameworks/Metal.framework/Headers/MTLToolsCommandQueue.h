/* Runtime dump - MTLToolsCommandQueue
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI>
{
    MTLToolsPointerArray * _commandBuffers;
}

@property (readonly, nonatomic) MTLToolsPointerArray * commandBuffers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy) NSString * label;
@property (readonly) <MTLDevice> * device;
@property int backgroundTrackingPID;
@property char skipRender;
@property char executionEnabled;
@property char profilingEnabled;

- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsCommandQueue *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (char)isProfilingEnabled;
- (MTLToolsPointerArray *)commandBuffers;
- (id)commandBufferWithUnretainedReferences;
- (int)backgroundTrackingPID;
- (void)setBackgroundTrackingPID:(int)arg0;
- (char)skipRender;
- (void)setSkipRender:(char)arg0;
- (char)executionEnabled;
- (void)setExecutionEnabled:(char)arg0;
- (void)setProfilingEnabled:(char)arg0;
- (void)insertDebugCaptureBoundary;
- (NSObject *)commandBuffer;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (void)finish;
- (<MTLDevice> *)device;

@end
