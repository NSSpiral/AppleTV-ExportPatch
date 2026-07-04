/* Runtime dump - WKBrowsingContextHandle
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    unsigned long long _pageID;
}

@property (readonly, nonatomic) unsigned long long pageID;

+ (char)supportsSecureCoding;

- (WKBrowsingContextHandle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)_initWithPageID:(unsigned long long)arg0;
- (unsigned long long)_pageID;

@end
