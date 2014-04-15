//
//  OEGridCell.h
//  OpenEmu
//
//  Created by Daniel Nagel on 31.08.13.
//
//

#import <ImageKit/ImageKit.h>
#import "OEGridView.h"
@interface OEGridCell : IKImageBrowserCell
- (NSRect)ratingFrame;
- (OEGridView*)imageBrowserView;
@end
