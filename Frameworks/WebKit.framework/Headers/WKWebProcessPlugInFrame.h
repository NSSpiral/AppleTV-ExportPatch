/* Runtime dump - WKWebProcessPlugInFrame
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInFrame : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebFrame> _frame;
}

@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) NSArray * childFrames;
@property (readonly, nonatomic) char containsAnyFormElements;
@property (readonly, nonatomic) _WKFrameHandle * handle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

+ (WKWebProcessPlugInFrame *)lookUpFrameFromHandle:(id)arg0;

- (void)dealloc;
- (NSURL *)URL;
- (NSObject *)hitTest:(struct CGPoint)arg0;
- (NSArray *)childFrames;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (NSArray *)_certificateChain;
- (id)jsContextForWorld:(id)arg0;
- (id)jsNodeForNodeHandle:(id)arg0 inWorld:(WebScriptWorld *)arg1;
- (NSObject *)_browserContextController;
- (char)containsAnyFormElements;
- (char)_hasCustomContentProvider;
- (NSURL *)_provisionalURL;
- (_WKFrameHandle *)handle;

@end
