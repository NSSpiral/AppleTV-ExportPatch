/* Runtime dump - DOMDocumentType
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMDocumentType : DOMNode

@property (readonly, copy) NSString * name;
@property (readonly) DOMNamedNodeMap * entities;
@property (readonly) DOMNamedNodeMap * notations;
@property (readonly, copy) NSString * publicId;
@property (readonly, copy) NSString * systemId;
@property (readonly, copy) NSString * internalSubset;

- (NSString *)name;
- (void)remove;
- (DOMNamedNodeMap *)entities;
- (DOMNamedNodeMap *)notations;
- (NSString *)publicId;
- (NSString *)systemId;
- (NSString *)internalSubset;

@end
