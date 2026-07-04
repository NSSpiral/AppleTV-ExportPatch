/* Runtime dump - FigBWNodeRenderObserver
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigBWNodeRenderObserver : NSObject <BWNodeRenderDelegate>
{
    BWNode * _node;
    id _willRenderSampleBufferHandler;
    id _formatDidBecomeLiveHandler;
}

@property (copy, nonatomic) id willRenderSampleBufferHandler;
@property (copy, nonatomic) id formatDidBecomeLiveHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)node:(BWNode *)arg0 format:(NSString *)arg1 didBecomeLiveForOutput:(NSObject *)arg2;
- (void)node:(BWNode *)arg0 format:(NSString *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)node:(BWNode *)arg0 willRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(NSObject *)arg2;
- (FigBWNodeRenderObserver *)initWithBWNode:(NSObject *)arg0;
- (void)setWillRenderSampleBufferHandler:(id /* block */)arg0;
- (void)setFormatDidBecomeLiveHandler:(id /* block */)arg0;
- (id /* block */)willRenderSampleBufferHandler;
- (id /* block */)formatDidBecomeLiveHandler;

@end
