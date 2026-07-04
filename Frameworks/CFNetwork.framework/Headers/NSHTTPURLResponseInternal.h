/* Runtime dump - NSHTTPURLResponseInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLResponseInternal : NSObject <NSCoding>
{
    struct __SecTrust * peerTrust;
    char isMixedReplace;
}

- (void)dealloc;
- (NSHTTPURLResponseInternal *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;

@end
