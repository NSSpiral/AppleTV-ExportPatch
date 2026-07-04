/* Runtime dump - UIRuntimeConnection
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRuntimeConnection : NSObject <NSCoding>
{
    id source;
    id destination;
    NSString * label;
}

- (void)dealloc;
- (UIRuntimeConnection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)connectForSimulator;
- (void)connect;
- (void *)source;
- (void)setSource:(NSObject *)arg0;
- (MKMapItem *)destination;
- (void)setDestination:(NSObject *)arg0;

@end
