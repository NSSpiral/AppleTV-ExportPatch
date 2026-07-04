/* Runtime dump - MTLToolsCommandBuffer
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI>
{
    MTLToolsPointerArray * _renderCommandEncoders;
    MTLToolsPointerArray * _computeCommandEncoders;
    MTLToolsPointerArray * _blitCommandEncoders;
    MTLToolsPointerArray * _parallelRenderCommandEncoders;
}

@property (readonly, nonatomic) MTLToolsPointerArray * renderCommandEncoders;
@property (readonly, nonatomic) MTLToolsPointerArray * computeCommandEncoders;
@property (readonly, nonatomic) MTLToolsPointerArray * blitCommandEncoders;
@property (readonly, nonatomic) MTLToolsPointerArray * parallelRenderCommandEncoders;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLDevice> * device;
@property (readonly) <MTLCommandQueue> * commandQueue;
@property (readonly) char retainedReferences;
@property (copy) NSString * label;
@property (readonly) unsigned int status;
@property (readonly) NSError * error;
@property char profilingEnabled;
@property (readonly) NSDictionary * profilingResults;

- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsCommandBuffer *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (char)isProfilingEnabled;
- (char)retainedReferences;
- (void)enqueue;
- (void)addScheduledHandler:(id /* block */)arg0;
- (void)presentDrawable:(id)arg0;
- (void)presentDrawable:(id)arg0 atTime:(double)arg1;
- (void)addCompletedHandler:(id /* block */)arg0;
- (NSObject *)blitCommandEncoder;
- (NSObject *)computeCommandEncoder;
- (NSObject *)parallelRenderCommandEncoderWithDescriptor:(NSObject *)arg0;
- (MTLToolsPointerArray *)blitCommandEncoders;
- (NSObject *)unwrapMTLRenderPassDescriptor:(NSObject *)arg0;
- (MTLToolsPointerArray *)renderCommandEncoders;
- (MTLToolsPointerArray *)computeCommandEncoders;
- (MTLToolsPointerArray *)parallelRenderCommandEncoders;
- (NSObject *)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct ? *)arg0 capacity:(unsigned int)arg1;
- (void)setProfilingEnabled:(char)arg0;
- (NSDictionary *)profilingResults;
- (id)sampledRenderCommandEncoderWithFramebuffer:(TSCH3DGLFramebuffer *)arg0 programInfoBuffer:(struct ? *)arg1 capacity:(unsigned int)arg2;
- (void)waitUntilScheduled;
- (void)waitUntilCompleted;
- (NSObject *)renderCommandEncoderWithDescriptor:(NSObject *)arg0;
- (NSString *)label;
- (void)commit;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (unsigned int)status;
- (NSError *)error;
- (<MTLCommandQueue> *)commandQueue;
- (<MTLDevice> *)device;

@end
