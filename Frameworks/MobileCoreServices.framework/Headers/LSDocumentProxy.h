/* Runtime dump - LSDocumentProxy
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSDocumentProxy : LSResourceProxy
{
    char _sourceIsManaged;
    NSString * _name;
    NSString * _typeIdentifier;
    NSString * _MIMEType;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * typeIdentifier;
@property (readonly, nonatomic) NSString * MIMEType;
@property (readonly, nonatomic) char sourceIsManaged;

+ (NSString *)documentProxyForName:(NSString *)arg0 type:(NSObject *)arg1 MIMEType:(NSString *)arg2 sourceIsManaged:(char)arg3;
+ (NSString *)documentProxyForName:(NSString *)arg0 type:(NSObject *)arg1 MIMEType:(NSString *)arg2;

- (struct CGSize)_defaultStyleSize:(NSObject *)arg0;
- (struct ? *)_iconVariantDefinitions:(SEL)arg0;
- (NSString *)typeIdentifier;
- (NSString *)iconStyleDomain;
- (void)bind;
- (LSDocumentProxy *)initWithName:(NSString *)arg0 type:(NSObject *)arg1 MIMEType:(NSString *)arg2 sourceIsManaged:(char)arg3;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (NSString *)MIMEType;
- (char)sourceIsManaged;

@end
