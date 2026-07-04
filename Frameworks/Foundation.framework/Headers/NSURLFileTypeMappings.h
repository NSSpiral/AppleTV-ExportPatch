/* Runtime dump - NSURLFileTypeMappings
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLFileTypeMappings : NSObject
{
    NSURLFileTypeMappingsInternal * _internal;
}

+ (NSURLFileTypeMappings *)sharedMappings;

- (id)_UTIMIMETypeForExtension:(id)arg0;
- (NSObject *)_UTIextensionForMIMEType:(NSObject *)arg0;
- (NSObject *)preferredExtensionForMIMEType:(NSObject *)arg0;
- (NSObject *)extensionsForMIMEType:(NSObject *)arg0;
- (NSURLFileTypeMappings *)_init;
- (id)MIMETypeForExtension:(id)arg0;

@end
