/* Runtime dump - TSCH3DRenderPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderPipeline : NSObject
{
    TSCH3DRenderProcessor * mProcessor;
    TSCH3DSession * mSession;
}

@property (retain, nonatomic) TSCH3DRenderProcessor * processor;
@property (readonly, nonatomic) TSCH3DSession * session;
@property (readonly, nonatomic) TSCH3DGLContext * context;

+ (TSCH3DRenderPipeline *)pipelineWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(TSCH3DSession *)arg1;
+ (NSObject *)clipRectForTargetSize:(struct tvec2<int> *)arg0 intermediateSize:(struct tvec2<int>)arg1;

- (TSCH3DRenderProcessor *)processor;
- (TSCH3DRenderPipeline *)initWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(TSCH3DSession *)arg1;
- (void)setProcessor:(TSCH3DRenderProcessor *)arg0;
- (void)dealloc;
- (TSCH3DGLContext *)context;
- (TSCH3DSession *)session;

@end
