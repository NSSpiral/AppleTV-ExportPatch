/* Runtime dump - GSDocumentIdentifier
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    id volumeUUID;
    unsigned long long documentID;
    int deviceID;
}

+ (char)supportsSecureCoding;

- (GSDocumentIdentifier *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GSDocumentIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (GSDocumentIdentifier *)initWithFileDescriptor:(int)arg0 forItemAtURL:(NSURL *)arg1 allocateIfNone:(char)arg2 error:(id *)arg3;
- (GSDocumentIdentifier *)initWithDocumentIdentifier:(NSString *)arg0;

@end
