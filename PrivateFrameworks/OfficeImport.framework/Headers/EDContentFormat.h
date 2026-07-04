/* Runtime dump - EDContentFormat
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying>
{
    EDString * mFormatString;
    unsigned int mFormatId;
    BOOL mBuiltIn;
    BOOL mReferenced;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)contentFormatWithFormatString:(NSString *)arg0;
+ (NSString *)contentFormatWithFormatString:(NSString *)arg0 formatId:(unsigned int)arg1;
+ (NSString *)contentFormatWithNSString:(NSString *)arg0 formatId:(unsigned int)arg1 builtIn:(BOOL)arg2;

- (void)dealloc;
- (EDContentFormat *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)key;
- (EDContentFormat *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)formatString;
- (unsigned int)formatId;
- (char)isEqualToContentFormat:(NSString *)arg0;
- (BOOL)builtIn;
- (BOOL)referenced;
- (void)setFormatId:(unsigned int)arg0;
- (void)setReferenced:(BOOL)arg0;

@end
