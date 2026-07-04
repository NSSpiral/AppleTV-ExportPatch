/* Runtime dump - WKWebProcessPlugInNodeHandle
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;
}

@property (readonly, nonatomic) struct CGRect elementBounds;
@property (nonatomic) char HTMLInputElementIsAutoFilled;
@property (readonly, nonatomic) char HTMLInputElementIsUserEdited;
@property (readonly, nonatomic) char HTMLTextAreaElementIsUserEdited;
@property (readonly, nonatomic) WKWebProcessPlugInNodeHandle * HTMLTableCellElementCellAbove;
@property (readonly) struct InjectedBundleNodeHandle * _nodeHandle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

+ (WKWebProcessPlugInNodeHandle *)nodeHandleWithJSValue:(id)arg0 inContext:(NSObject *)arg1;

- (void)dealloc;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (NSObject *)htmlIFrameElementContentFrame;
- (struct CGRect)elementBounds;
- (char)HTMLInputElementIsAutoFilled;
- (void)setHTMLInputElementIsAutoFilled:(char)arg0;
- (char)HTMLInputElementIsUserEdited;
- (char)HTMLTextAreaElementIsUserEdited;
- (char)isTextField;
- (WKWebProcessPlugInNodeHandle *)HTMLTableCellElementCellAbove;
- (struct InjectedBundleNodeHandle *)_nodeHandle;

@end
