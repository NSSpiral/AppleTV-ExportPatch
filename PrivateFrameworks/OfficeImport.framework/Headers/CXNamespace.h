/* Runtime dump - CXNamespace
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CXNamespace : NSObject
{
    char * mUri;
    struct _xmlDoc * mDocument;
    struct _xmlNs * mDocumentNamespace;
    CXNamespace * mFallbackNamespace;
}

@property (retain, nonatomic) CXNamespace * fallbackNamespace;

+ (void)registerNamespace:(id)arg0;
+ (char)isNamespaceSupported:(char *)arg0;
+ (char)isPrefixSupportedFromNodeContext:(struct _xmlNode *)arg0 prefix:(struct _xmlNode *)arg1;
+ (char)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg0 prefix:(char *)arg1;
+ (void)clearRegisteredNamespaces;

- (void)dealloc;
- (CXNamespace *)init;
- (char)containsNode:(struct _xmlNode *)arg0;
- (CXNamespace *)initUnsupportedNsWithUri:(char *)arg0;
- (CXNamespace *)initWithUri:(char *)arg0;
- (char)containsAttribute:(struct _xmlAttr *)arg0;
- (char *)fallbackUri;
- (CXNamespace *)initWithUri:(char *)arg0 fallbackNamespace:(CXNamespace *)arg1;
- (char *)uri;
- (CXNamespace *)fallbackNamespace;
- (void)setFallbackNamespace:(CXNamespace *)arg0;

@end
