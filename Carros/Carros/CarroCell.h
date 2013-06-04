//
//  CarroCell.h
//  Carros
//
//  Created by André Cocuroci on 31/05/13.
//  Copyright (c) 2013 André Cocuroci. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DownloadImageView.h"

@interface CarroCell : UITableViewCell

@property (nonatomic, retain) IBOutlet UILabel *cellDesc;
@property (nonatomic, retain) IBOutlet DownloadImageView *cellImg;

@end
