/* Runtime dump - MCNearbyPeerTableViewHeader
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyPeerTableViewHeader : UIView
{
    UIActivityIndicatorView * _spinner;
    UILabel * _text;
}

- (void)dealloc;
- (void)layoutSubviews;
- (MCNearbyPeerTableViewHeader *)initWithTitle:(NSString *)arg0;

@end
